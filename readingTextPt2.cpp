//  Last sanity check: 2020-04-28
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

int main_reading_text_p2()
{
    string fn = "/Users/Alex/Xcode/Exer/Exer/date.txt";
    ifstream input;
    input.open(fn);
    
    if(!input.is_open())
    {
        return 1;
    }
    
    while (input)
    {
        string line;
        
        getline(input, line, ':');
        
        int pop;
        input >> pop;
        
        //input.get();
        input >> ws; //read whatever whitespace is in the file
        
        //Check if there are no errors
        if (!input)
        {
            break;
        }
        
        cout <<"'"<< line << "'" << " - - " << "'" << pop << "'" << endl;
    }
    
    input.close();
    
    return 0;
}
