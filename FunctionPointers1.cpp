//  Last sanity check: 2020-04-11
#include <stdio.h>
#include <iostream>
#include <vector>
using  namespace std;
// send a function to the forEach function

void printValue(int v)
{
    cout<<"Value: "<<v<<endl;
}

void forEach(const vector<int> &val, void(*func)(int) ) //  auto func works as well
{
    for( int i : val)
        func(i);
    
}

int main()
{ 
    vector<int> v = {1,2,3,4,5,6,7};
    
    forEach(v, printValue);
    
    return 0;
}
