//  Last sanity check: 2020-05-03
//
//  main.cpp
//  Lists
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include<iostream>
#include<list>

using namespace std;

int main_lists()
{
    list<int> numbers;
    
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    
    numbers.push_front(0);
    
    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    
    cout <<"Element: "<< *it << endl;

    list<int>::iterator e = numbers.begin();
    e++;
    e = numbers.erase(e);
    //After erasing the iterator must not be re-used! It must point at a different location!
    cout <<"Element: "<< *e << endl;
    
    for (list<int>::iterator it = numbers.begin(); it!=numbers.end();)
    {
        if (*it == 2)
           numbers.insert(it, 1234);
        if (*it == 1)
            it = numbers.erase(it); // Iterator will skip an element!
        else
            it++;
    }
    
    for (list<int>::iterator it = numbers.begin(); it!=numbers.end(); ++it)
    {
        cout << *it << endl;
    }
    
    return 0;
}
