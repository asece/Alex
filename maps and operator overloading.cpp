//  Last sanity check: 2020-04-01
//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Person
{
private:
    string name;
    int age;
    
public:
    Person(): name ("name"), age (0) { }
    
    Person (string name, int age) :
    name (name), age (age) { }
    
    Person(const Person &other)
    {
       // cout << "Copy constructor running!"<<endl;
        name = other.name;
        age = other.age;
    }
    
    void print() const
    {
        cout << name << "\t:\t" << age << flush;
    }
    
    //Operator overloading!
    bool operator< (const Person &other) const
    {
        if ( name == other.name)
            return age < other.age;
        else
            return name < other.name;
        
    }
    
};

int main();
{
    map <Person, int> people;

    people[Person("Mih", 18)] = 18;
    people[Person("Mih", 188)] = 44;
    people[Person("Alx", 34)] = 34;
    people[Person("Vld", 52)] = 52;
    
    cout << endl;
//    cout << "K|Name\t\tAge"<<endl;

    for ( map<Person, int>::iterator it = people.begin(); it != people.end(); it++ )
    {
        cout << it -> second << " : " << flush;
        it -> first.print();
        cout << endl;
    }
    cout << endl;
    return 0;
}


