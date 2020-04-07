//  Last sanity check: 2020-04-07
//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include<iostream>
#include<map>

using namespace std;

int main_maps()
{
    map<string, int> ages;
    
    ages["Mihai"] = 18;
    ages["Ion"] = 22;
    ages["Alex"] = 24;
    
    pair<string, int> toMap("Gigi", 56);
    ages.insert(toMap);
    
    ages.insert(make_pair("Ionel", 34));
    
    //cout << ages["Mihai"] << endl;
    
    if ( ages.find("Mihai") != ages.end() )
        cout << "EXISTA!" << endl;
    else
        cout << "Nu EXISTA!" << endl;
    
    for ( map<string, int>::iterator it = ages.begin(); it != ages.end(); it++ )
    {
        pair<string, int> age = *it;
        //cout << it -> first << ": "<< it -> second << endl;
        cout << age.first << ": "<< age.second << endl;
    }
    
    cout << endl << "Size of map is: " <<ages.size() << "   sizeof(map) is: " <<sizeof(ages) <<"B"<< endl;
    
    return 0;
}
