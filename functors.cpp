//  Last sanity check: 2020-03-16
//
//  abstract classes and pure virtual.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//This is a functor. It overloads the () operator
struct MatchTest
{
    bool operator()(string &text)
    {
        return text == "lion";
    }
};

void check(string text)
{
    
}

int main()
{
    MatchTest cuv;
    
    string val = "lion";
    
    cout << cuv(val) << endl;
    
    return 0;
}

