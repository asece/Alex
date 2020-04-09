//  Last sanity check: 2020-04-09
#include <algorithm>
 #include <vector>
 #include <iostream>
 using namespace std;
 
int solution(vector<int> &A) {
    int missing = 0;
    
    //first computation
    for (int i = 0 ; i< int(A.size()) ; i++)
        missing  += (i + 1 - A[i]);
    //find the missing element
    missing += int(A.size() + 1);
    
    return missing;
}
