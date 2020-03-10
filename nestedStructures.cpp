//  Last sanity check: 2020-03-10
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<string, vector<int> > note;
    
    note["Alex"].push_back(8);
    note["Alex"].push_back(4);
    note["Alex"].push_back(9);
    note["Adi"].push_back(2);
    note["Adi"].push_back(10);

    for( auto it = note.begin(); it != note.end(); it++)
    {
        string name = it -> first;
        vector<int> x = it -> second;
        
        cout << "Student: "<<name<< "  note: " << flush;
        int med = 0, t = 0;
        for ( auto i = x.begin(); i != x.end() ; i++)
        {
            cout << *i << " " << flush;
            med++;
            t += *i;
        }
        cout << "\t\t Media: "<< t / med << endl;;
    }

    return 0;
}
