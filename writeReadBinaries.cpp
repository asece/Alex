//  Last sanity check: 2020-04-13
//
//  main.cpp
//  Write and read binary files
//
//  Created by Alex Seceleanu on 4/7/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.

#include <stdio.h>
#include<iostream>
#include<fstream>
   
using namespace std;

//align data on single byte boundaries
#pragma pack(push, 1)

struct Person
{
//must turn of the padding -> use preporcessor directive
    char name[50];
    int age;
    double height;
};

#pragma pack(pop)


int main_w_r_binaries()
{
    
    Person alex = {"Alexandru", 24, 174.6 };
    
    ////////    WRITE   ////////
    
    string fn = "/Users/Alex/Xcode/Exer/Exer/raw.bin";
    ofstream outputFile;
    
    outputFile.open(fn, ios::binary);
    
    if(outputFile.is_open())
    {
        //New way of casting pointer: reinterpret_cast<>
        outputFile.write(reinterpret_cast<char  *>(&alex), sizeof(Person));
        
        outputFile.close();
    }
    else cout << "!Could not WRITE " + fn;
    
    /////////////      READ     /////////////////////
    
    Person ion = { };
    
    ifstream inputFile;
    
    inputFile.open(fn, ios::binary);
    
    if(inputFile.is_open())
    {
        //New way of casting pointer: reinterpret_cast<>
        inputFile.read(reinterpret_cast<char  *>(&ion), sizeof(Person));
        
        inputFile.close();
    }
    else cout << "!Could not READ " + fn;
    
    cout << ion.name << " , " << ion.age << " , " << ion.height << endl;
    
    return 0;
}
