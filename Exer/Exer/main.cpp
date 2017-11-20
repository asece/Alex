//
//  main.cpp
//  Exer
//
//  Created by Alex Seceleanu on 11/20/17.
//  Copyright © 2017 Alex Seceleanu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, x=0, i=0, v[31];
    
    cout << "Input number: ";
    cin >> n;
    i = 0;
    while(n)
    {
        v[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "\nNumber in base 2: ";
 
    for ( x = i-1 ; x >= 0; x--)
        cout << v [x];
    cout << "\n";
    
    return 0;
}
