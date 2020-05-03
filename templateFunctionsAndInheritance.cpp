//  Last sanity check: 2020-05-03
//
//  main.cpp
//  Cpp
//
//  Created by Alex Seceleanu on 4/9/18.
//  Copyright © 2018 Alex Seceleanu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

template<typename T>
void print (T n)
{
    cout<<"Template version\t"<<n<<endl;
}

void print(int val)
{
    cout << "Non template vers\t" << val << endl;
}

int main()
{
    int i = 99;
    
    print<int>(i);
    print<string>("Ciao");
    print("Te salut!");
    print(8);
    print<>(11);
    
    return 0;
}
