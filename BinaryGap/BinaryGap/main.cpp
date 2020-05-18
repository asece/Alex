//  Last sanity check: 2020-05-18
//
//  main.cpp
//  BinaryGap
//  Find longest sequence of zeros in binary representation of an integer.
//  Created by Alex Seceleanu on 11/20/17.
//  Copyright © 2017 Alex Seceleanu. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAXLEN 31

int func ( int N)
{
    int gap = 0, gAux= 0,  i = 0 , v[MAXLEN];
    while (N)
    {
        v[i] = N % 2;
        if(v[i] == 0)
        {
            gAux ++;
            if( gAux > gap)
                gap = gAux;
        }
        else gAux = 0;
        
        i++;
        N = N /2;
        
    }
    return gap;
}


int main()
{
    int n;
    cout << "Insert a decimal number: ";
    cin >> n;
    cout << "\nBinary Gap of "<<n<<" is: ";
    cout << func(n)<<"\n";
    return 0;
}
