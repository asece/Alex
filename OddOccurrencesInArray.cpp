//  Last sanity check: 2020-04-27
// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) 
{
    int i, odd = 0;
    for ( i = 0 ; i< A.size() ; i++ )
    {
        odd = odd ^ A[i];
    }
    return odd;
    
}
