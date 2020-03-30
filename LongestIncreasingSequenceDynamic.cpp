//  Last sanity check: 2020-03-30
// Longest Increasing Sequence - dynamic 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calc (vector<int>  & D)
{
    vector< vector<int> > L (D.size()); 
    
    L[0].push_back(D[0]);
    
    for (int i =1; i<D.size(); i++ )
    {
        for (int j=0; j<i; j++)
        {
            if( (D[j] < D[i]) && (L[i].size() < L[j].size() + 1) ) 
            {
                L[i] = L[j];          
            }
        }
    }

  //  do some printing here
    
}

int main()
{
    int a[] = { 3, 2, 6, 5, 1 };
    vector<int> arr(a, a+sizeof(a)/sizeof(a[0]));
    
//  do some printing
    calc(arr);
    
    return 0;
}
