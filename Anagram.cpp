//  Last sanity check: 2020-03-24

int makeAnagram(string a, string b) {

    auto count = 0;
    vector<int> freq(26, 0);
    for (auto c : a) 
    { 
        ++freq[c - 'a']; 
    }
    for (auto c : b) 
    { 
        --freq[c - 'a']; 
    }
    for (auto val : freq) 
    { 
        count += abs(val); \
    }
    return count;

}