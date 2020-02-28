//  Last sanity check: 2020-02-28
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include<stdio.h>
#include<iostream>
#include<set>
#include<stack>
#include<queue>


using namespace std;

class Person
{
private:
    string name;
    
public:
    Person(): name("name") {}
    
    Person( string name):
    name(name) { cout << "\t\t\tPerson is created: "<<name<<endl;}
    
    ~Person()
    {
        cout << "\t\t\t Object destroyed!"<<endl;
    }
    bool operator< (const Person &other) const
    {
        return name < other.name;
    }
    
    void print() const
    {
        cout << name << endl;
    }
    
};

int main()
{
    //LIFO functionality
    stack<Person> test;
    
    test.push(Person("Alex"));
    test.push(Person("Vlad"));
    test.push(Person("Andrei"));
    
//    Person t1 = test.top();
//    t1.print();
//
//    test.pop();
//    Person t2 = test.top();
//    t2.print();
    
    cout<<endl<<endl;
    
    cout<< "Printing stack:"<<endl;
    while(test.size() > 0)
    {
        Person &t = test.top();
        t.print();
        test.pop();
    }
    
    return 0;
}

