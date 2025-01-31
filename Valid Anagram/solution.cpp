#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mapS;
        unordered_map<char, int> mapT;

        if(s.length() != t.length()) {
            return false;
        }

        for(int i=0;i<s.length();i++) {
            mapS[s[i]]++;
            mapT[t[i]]++;
        }

        if(mapS == mapT) {
            return true;
        }
        
        return false;
    }
};