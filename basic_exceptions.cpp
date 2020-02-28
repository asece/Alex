//  Last sanity check: 2020-02-28
//
//  Created by Alex Seceleanu on 11/20/17.
//  Copyright © 2017 Alex Seceleanu. All rights reserved.

#include <iostream>
using namespace std;

void mightGoWrong()
{
    bool error = false;
    bool error2 = true;
    
    if (error)
    {
        throw "Something went wrong!";
    }
    
    if (error2)
    {
        throw string("Something else happened");
    }
    
}

void usesGoWrong()
{
    mightGoWrong();
}

int main_old()
{
    try {
        usesGoWrong();
    }
    catch(int e)
    {
        cout <<"Error occured with code "<< e << endl;
    }
    catch(char const* e)
    {
        cout << "Error msg: "<< e << endl;
    }
    catch(string &e)
    {
        cout<< "String err msg: "<<e<<endl;
    }
    
    return 0;
}
