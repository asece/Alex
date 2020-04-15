//  Last sanity check: 2020-04-15
// you can use includes, for example:
 #include <algorithm>
 #include <iostream>
 #include <string>
 #include <cstring>
 #include <sstream>
 #include <vector>
 using namespace std;
 
/* Attention:
* - 20bit int! 
* - Don't leave the stack empty after operations!
* - Verify operations and input
* - Verify negative results
* - return -1 if an error is encountered
* Approach: Verify input; Decode word instructions; Compute;
* 
*/


int solution(string &S) 
{
    int no, intBuf, int1, int2, pos;
    vector <int> numbers;
    string pop = "POP";
    string dup = "DUP";
    string add = "+";
    string sub = "-";
    
    //Reading words one by one   
    istringstream x(S);
    string a;
    while (x >> a)
    if (a == dup)
    {
        if(!numbers.empty())
        {
            intBuf = numbers.back();
            numbers.push_back(intBuf);
        }   
    }
    else if (a == pop)
    {
        numbers.pop_back();      
    }
    else if (a == add) 
    {
        if (numbers.size() < 1) return -1;
        else
        { 
            pos = numbers.size() - 1;
            int1 = numbers[pos];
            int2 = numbers[pos-1];
            numbers.pop_back(); 
            if (numbers.size() < 1) return -1;
            numbers.pop_back(); 
            numbers.push_back(int1+int2);
        }
    }
    else if (a == sub)
     {
        if (numbers.size() < 1) return -1;
        else
        {
            pos = numbers.size() - 1;
            int1 = numbers[pos];
            int2 = numbers[pos-1];
            numbers.pop_back();
            if (numbers.size() < 1) return -1;
            numbers.pop_back(); 
            if ( (int1-int2) < 0 ) return -1;
            else numbers.push_back(int1-int2);
        }
       
    }
    else 
    {
        no = stoi (a);
        if (no < 0) return -1;
        else
            numbers.push_back(no);
    }
    return numbers.back();
}
