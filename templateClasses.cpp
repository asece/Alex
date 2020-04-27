//  Last sanity check: 2020-04-27
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

template<class T, class K>
class Test{
    T obj;
    K obj1;
public:
    Test(T obj, K obj1)
    {
        this -> obj = obj;
        this -> obj1 = obj1;
    }
    
    void print()
    {
        cout << obj << " : " << obj1 << endl;
    }
};


int main()
{
    Test<string, int> t1("Hello", 1);
    t1.print();
    
    
    return 0;
}
