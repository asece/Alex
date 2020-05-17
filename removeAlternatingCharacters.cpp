//  Last sanity check: 2020-05-17
int alternatingCharacters(string s) 
{
    int del = 0, i = 0;
    
    while(i != s.length())
    {
        if(s[i] == s[i+1] )
        {
            s.erase(i+1,1);
            ++del;
        }
        else i++;    
    }

    cout<< "del = "<<del<<endl;
    cout<< " s = "<<s<<endl;
    return del;
}
