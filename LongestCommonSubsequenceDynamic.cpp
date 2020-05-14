//  Last sanity check: 2020-05-14
// Longest Common Subsequence - dynamic
// X = ACCG
// Y = CCAGCA
// lenght 1 : A ; C; G
// lenght 2 : AC CC CG AG
// lenght 3 : CCG   <- longest common subseq. 
// lenght 4 : none


#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calc (string & X, string & Y)
{
    vector< vector<int> > C;    //length of subsequence of sequence
    for( int i=0; i<X.size(); i++ )
        C.push_back( vector<int>(Y.size(), 0) );

    for (int i=1; i<X.sixe(); i++)
    {
        for(int j =1; j<Y.size();j++)
            if (X[i] == Y[j])
                C[i][j] = C[i-1][j-1] + 1;
            else if ( C[i][j-1] > C[i-1][j] )
                C[i][j] = C[i][j-1];
            else
                C[i][j] = C[i-1][j];
    }
    //need to print the characters
    
}

int main()
{
    string X = " ACCGGGTTAC"; 
    string Y = " AGGACCA";
    cout << "X: "<< X << endl;
    cout << "Y: "<< Y << endl;
    
    calc (X, Y);
    
    return 0;
}
