//  Last sanity check: 2020-04-02
//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<fstream>

using namespace std;


int main_reading()
{
    string fn = "/Users/Alex/Xcode/Exer/text.txt";
    
    ifstream inFile;
    
    inFile.open(fn);
    
    if (inFile.is_open())
    {
        string line;
        
        while(inFile)
        {
            getline(inFile, line);
            cout << line<< endl;
        }
        
        inFile.close();
    }
    else cout << "Cannot open file: "<<fn<<endl;
    
    return 0;
}
