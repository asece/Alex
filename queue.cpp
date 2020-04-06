//  Last sanity check: 2020-04-06
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include<stdio.h>
#include<iostream>
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
    //FIFO functionality
    queue<Person> test;
    
    test.push(Person("Alex"));
    test.push(Person("Vlad"));
    test.push(Person("Andrei"));
    test.push(Person("Ionel"));

    cout<<endl<<endl;
    
    test.back().print();
    
    cout<< "Printing stack:"<<endl;
    while(test.size() > 0)
    {
        Person &t = test.front();
        t.print();
        test.pop();
    }
    cout << "Size of queue: "<<sizeof(test)<< endl;
    
    return 0;
}


