//  Last sanity check: 2020-05-17
//  main.cpp
//  Writing text files
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include<iostream>
#include<fstream>

using namespace std;


int main_writeFiles()
{
    ofstream outFile;
    string outputFN = "text.txt";
    outFile.open(outputFN);
    
    if (outFile.is_open())
    {
        cout<< "File opened!" << endl;
        outFile << "Hello there!" << endl;
        outFile << "1 2 3 4 5" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else
    {
        cout << "Could not create file: "<< outputFN<< endl;
    }
    return 0;
}

