//  Last sanity check: 2020-04-15
//https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen

#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) 
{

    int level = 0, i = 0, valleys = 0, inValley = 0;

    for(i=0; i<n; i++)
    {
        if(s[i] == 'D') 
        {
            level --;
            if ( level < 0 && inValley == 0)
                inValley = 1; 
        }
        else if (s[i] == 'U') 
        {
            level ++;
        }
    if ( level == 0 && inValley == 1)
        {
            valleys ++;
            inValley = 0;
        }
    }

    cout << endl << " Level = " << level;
    if (level != 0)
        cout << endl << "INPUT NOT OK! LEVEL IS NOT AT SEA LEVEL !!!";
    
    return valleys;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
