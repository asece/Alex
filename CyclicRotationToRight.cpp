//  Last sanity check: 2020-04-03
 #include <algorithm>
 #include <iostream>
 #include <vector>
 using namespace std;
 
 
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



vector<int> solution(vector<int> &A, int K) 
{
    // check if array is empty
    if( A.empty() )
        return A;
        
    //check for useless operations
    K %= A.size();
    if( A.size() == 0 || A.size() == 1 || K == 0 )
        return A;
        
    //start rotating    
    rotate(A.rbegin(), A.rbegin()+K, A.rend());   
    return A;
}
