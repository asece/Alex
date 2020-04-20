//  Last sanity check: 2020-04-20
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Parent
{
    int one;
    
public:
    Parent (): one(0) {}
    
    Parent(const Parent &other): one(0)
    { cout<< "Copy parent"<<endl; }
    
    virtual void print()
    {
        cout << "Parent" << endl;
    }
    
    virtual ~Parent() {}
};

class Child: public Parent
{
    int two;
    
public:
    
    Child():two(0) {}
    
    void print()
    {
        cout << "Child" << endl;
    }

};

int main()
{
    Child c1;
    Parent &p1 = c1;
    
    p1.print();
    
    //This is object slicing - upcasting a child object to the parent type
    //changing one type to another
    
    Parent p2 = Child();
    p2.print();
    
    return 0;
}
