//  Last sanity check: 2020-03-23
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
        cout << "Copy constructor running!"<<endl;
        name = other.name;
        age = other.age;
    }
    
    void print()
    {
        cout << name << ":\t" << age << endl;
    }
};

int main()
{
    map <int, Person> people;
    
    people[0] = Person ("Mihai", 18);
    people[1] = Person ("Ion", 22);
    people[2] = Person ("Alex", 24);
    //people[3] = Person();
    
    people.insert(make_pair(5, Person("Adrian", 33)));
    people.insert(make_pair(6, Person("Vlad", 54)));

//    pair<string, int> toMap("Gigi", 56);
//    ages.insert(toMap);
//
//    ages.insert(make_pair("Ionel", 34));

    cout << endl;
    cout << "K|Name \t Age"<<endl;
    for ( map<int, Person>::iterator it = people.begin(); it != people.end(); it++ )
    {
        cout << it -> first << ":" << flush;
        it -> second.print();
    }
    
    cout << endl << "Size of map is: " <<people.size() << "   sizeof(map) is: " <<sizeof(people) <<"B"<< endl;
    
    return 0;
}

