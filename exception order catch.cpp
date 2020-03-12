//  Last sanity check: 2020-03-12
//
//  main.cpp
//  Catching exception order
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<exception>

using namespace std;

void goesWrong()
{
    bool error1Detected = false;
    bool error2Detected = true;
    
    if (error1Detected)
    {
        throw bad_alloc();
    }
    if (error2Detected)
    {
        throw exception();
    }

}

int main_exc_order()
{
    try
    {
        goesWrong();
    }
    /*
     TO UNDERSTAND: CATCH CHILD CLASSES EXCEPTIONS FIRST! Due to polymorfism sub classes can be used where parent classes should. bad_allos is children of exception!
     */
    catch(bad_alloc &e)
    {
        cout << "Bad_alloc -- " << e.what()<<endl;
    }
    catch(exception &e)
    {
        cout << "Exception -- " << e.what()<<endl;
    }

    
    return 0;
}
