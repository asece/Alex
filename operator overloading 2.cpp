//  Last sanity check: 2020-02-26
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Test{
    int id;
    string name;
    
public:
    Test(): id(0), name("name") {}
    
    Test(int id, string name):
    id(id), name(name) {}
    
    void print() const
    {
        cout<<id << " | " << name<< endl;
    }
    
    const Test &operator=(const Test &eg)
    {
        cout << "Egal customizat"<<endl;
        id = eg.id;
        name = eg.name;
        return *this;
    }
    
    Test(const Test &copy)
    {
        cout << "Copy constructor"<<endl;
        //id = copy.id;
        //name = copy.name;
        *this = copy;
    }
    
    friend ostream &operator<<(ostream &out, const Test &test);
    
};

ostream &operator<<(ostream &out, const Test &test)
{
    cout << test.id << ":" <<test.name;
    return out;
}

int main()
{
    Test t1 = Test(1, "Alex");
    t1.print();
    
    Test t2 = Test(2, "Lori");
    t2.print();
    
    t2 = t1;
    
    t1.print();
    t2.print();
    
    Test t3 = t2;
    t3.print();
    cout<<endl<<t1<<endl<<t2<<endl;
    return 0;
}
