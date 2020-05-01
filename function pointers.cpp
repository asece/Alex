//  Last sanity check: 2020-05-01
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void test(int i)
{
    cout << i << ". Hello is here!" << endl;
}

int main()
{
    test(22);
    
    //Pointer to a function
    void (*pTest)(int);
    
    pTest = test;
    
    pTest(55);
    
    return 0;
}
