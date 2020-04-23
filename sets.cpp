//  Last sanity check: 2020-04-23
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include<iostream>
#include<set>

using namespace std;

class Person
{
private:
    string name;
    int age;
    
public:
    Person(): name("name"), age(0) {}
    
    Person( string name, int age):
            name(name), age(age) {}
    
    bool operator< (const Person &other) const
    {
        return name < other.name;
    }
    
    void print() const
    {
        cout << name << " : " << age << flush;
    }
    
};

int main()
{
    set<Person> s;
    
    set<int> n;
    
    s.insert(Person("Alex", 24));
    s.insert(Person("Vlad", 44));
    s.insert(Person("Ion", 16));
    
    n.insert(40);
    n.insert(20);
    n.insert(10);
    n.insert(30);
    n.insert(30);
    n.insert(50);
    
    for( auto it = s.begin(); it!=s.end(); it++)
    {
        it->print();
        cout<<endl;
    }
    
    for( auto it = n.begin(); it!=n.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    if (n.count(20))
        cout<<endl<<"Found 20!"<<endl;
    
    return 0;
}
