//  Last sanity check: 2020-04-19
//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include<iostream>

using namespace std;

class CanGoWrong {
public:
    CanGoWrong()
    {
        char *pMem = new char[999999999999999];
        delete [] pMem;
    }
};

int main_cathcExep()
{
    try {
    CanGoWrong wrong;
    }
    catch(bad_alloc &e) {
        cout << "got exception: "<< e.what() << endl;
    }
    
    cout<<endl<<"Wellcome!"<<endl;
    return 0;
}
