//  Last sanity check: 2020-05-06
//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int main_2d_vector()
{
    vector< vector<int> > grid(4, vector<int>(6, 6));
    
    
    for  ( int row = 0; row < grid.size(); row++ )
    {
        cout << '\t';
        for ( int col = 0; col < grid[row].size(); col++)
        {
            cout << grid[row][col] << flush;
        }
        cout << endl;
    }
    cout << endl << "Cap: " << grid.capacity() << endl;
    
    return 0;
}
