//  Last sanity check: 2020-04-25
//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<exception>

using namespace std;

class MyExc: public exception {
public:
    virtual const char* what() const throw()
    {
        return "Something bad bad happened!";
    }
};

class Test {
public:
    void GoesWrong()
    {
        throw MyExc();
    }
};

int main_custom_exc()
{
    Test test;
    try
    {
        test.GoesWrong();
    }
    catch(MyExc &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}
