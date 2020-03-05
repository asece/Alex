//  Last sanity check: 2020-03-05
//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;

int main()
{
    multimap<int, string> look;
    
    look.insert(make_pair(30, "Mih"));
    look.insert(make_pair(10, "Ale"));
    look.insert(make_pair(30, "Bob"));
    look.insert(make_pair(20, "Ion"));
    look.insert(make_pair(40, "Ana"));


    for (multimap<int, string>::iterator it = look.begin(); it!=look.end(); it++)
    {
        cout << it -> first << " : " << it -> second << endl;
    }
    cout<<endl << "Searching for key 30:"<< endl ;
    for (multimap<int, string>::iterator it = look.find(30); it!=look.end(); it++)
    {
        cout << it -> first << " : " << it -> second << endl;
    }
    
    cout <<endl <<"Correctly searching for key 30:"<< endl;
    //pair<multimap<int, string>::iterator, multimap<int, string>::iterator>
    
    auto its = look.equal_range(30);
    
    for (auto it = its.first; it!=its.second; it++)
    {
        cout << it -> first << " : " << it -> second << endl;
    }
    
    
    
    return 0;
}
