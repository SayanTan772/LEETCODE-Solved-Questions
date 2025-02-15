#include <iostream>
#include <String>

using namespace std;

class Solution {
    public:
        int lengthOfLastWord(string s) {
            int start, end, count = 0;
    
            for(int i = 0; i < s.length(); i++) {
                if(s[i] != ' ') {
                    start = i;
                    break;
                }
            }
    
            for(int j = s.length() - 1; j >= 0 ; j--) {
                if(s[j] != ' ') {
                    end = j;
                    break;
                }
            }
    
            for(int k = end; k >= start; k--) {
                if(s[k] != ' ') {
                    count++;
                } else {
                    break;
                }
            }
    
            return count;
        }
    };