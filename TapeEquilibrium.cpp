//  Last sanity check: 2020-03-23
 #include <algorithm>
 #include <iostream>
 #include <vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) 
{
    unsigned int i, l = A.size();
    long long sum = 0;
    long long leftSum =0;
    int  min = 999999, minAux;
    
    //find the sum of all elements
    for (i = 0 ; i < l; i++ )
        sum += A[i];
    
    //search for the minimal difference
    for (i = 0 ; i < l; i++ )
    {   
        leftSum += A[i];
        sum -= A[i];
        //compute absolute difference
        if ( sum > leftSum )
            minAux =  sum - leftSum;
        else minAux = leftSum - sum; 
        
        if( minAux < min )
            min = minAux;
    }        
    return min;   
}
