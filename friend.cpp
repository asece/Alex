//  Last sanity check: 2020-04-06
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include <iostream>
using namespace std;

class Names{
    string name;
    void print()
    {
        cout<<endl<<"Printed from protected: "<<name<<endl;
    }
    
public:
    Names():name("name"){}
    
    Names(string name): name(name) {}

    friend void printName(Names &ob);
    
};
void printName(Names &ob)
{
    cout<< endl << "Printed from printName: " << ob.name << endl;
    ob.print();
}

int main()
{
    Names a = Names("Alex");
    //a.print();
    cout<<endl;
    
    //cout<< a.name;
    printName(a);
    
    cout<<endl;
    return 0;
}
