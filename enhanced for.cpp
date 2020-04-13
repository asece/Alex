//  Last sanity check: 2020-04-13
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    auto t = {"one", "two", "there"};
    
    for (auto i : t)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(3);
    numbers.push_back(7);
    numbers.push_back(11);
    
    for ( auto i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

