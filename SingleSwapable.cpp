//  Last sanity check: 2020-03-20
// you can use includes, for example:
 #include <algorithm>
 #include <vector>
 #include <iostream>
 using namespace std;
 
 
bool solution(vector<int> &A) 
{
    int i, event = 0;
    
    // for (i = 0; i < int(A.size()-1); i++ )
    //     if (A[i] > A[i+1])
    //         event++;
    // if (event == 1 && A[i+1]!=A[i]) 
    //     return 0;
    
    for( i = int(A.size()); i >0; i--)
        if (A[i] == A[i-1]) 
            i--;
        else if (A[i] < A[i-1])
            event++;
            
    if (event > 1)
        return 0;
    if (event < 2)
        return 1;
}
