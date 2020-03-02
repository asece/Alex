//  Last sanity check: 2020-03-02
// C++ implementation below
#include <iostream>
#include <sys/resource.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <sys/types.h>
#include <algorithm>
#include <vector>

using namespace std;

class Answer
{
public:
    static bool exists(int ints[], int size, int k)
    {
    bool p;
    if (size == 0)
        return false;
        
    p = binary_search ( ints, ints+size, k);
    if( p == true)
        return true;
    else
        return false;
    }
};
