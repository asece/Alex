//  Last sanity check: 2020-04-23
//  abstract classes and pure virtual.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//  Last sanity check: 26.02.2020

#include <stdio.h>
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
    virtual void run() = 0;
    //can add non virtual functions too
    void done() { cout<<"DONE"<<endl; }
    void did() { cout<< "DID" <<endl ; }
};

class Dog: public Animal
{
public:
    virtual void speak()
    {
        cout << "Woof! I am dog." << endl;
    }
    
};

class Labra: public Dog
{
public:
    virtual void run()
    {
        cout << "Labrador is running!" << endl;
    }
};

void test(Animal &a)
{
    a.did();
}

int main()
{
    
    //    Dog dog;
    //    dog.speak();
    Animal *ani;
    
    Labra lab;
    lab.speak();
    lab.run();
    
    ani = &lab;
    
    test(lab);
    
    ani->run();
    return 0;
}


