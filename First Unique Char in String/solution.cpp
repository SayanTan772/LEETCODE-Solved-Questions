#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> Map;

        for(int i=0;i<s.length();i++) {
            Map[s[i]]++;
        }

        for(int i=0;i<s.length();i++) {
            if(Map[s[i]] == 1) {
                return i;
            }
        }

        return -1;

    }
};