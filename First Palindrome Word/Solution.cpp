#include <iostream>
#include <vector>
#include <String>

using namespace std;


class Solution {
    public:
            bool isPalindrome(const string& word) {
            int left = 0, right = word.size() - 1;
            while (left < right) {
                if (word[left] != word[right]) {
                    return false;
                }
                left++;
                right--;
            }
            return true;
        }
    
        string firstPalindrome(vector<string>& words) {
            for(int i=0; i<words.size(); i++) {
                if(isPalindrome(words[i])) {
                    return words[i];
                }
            }
    
            return "";
        }
    };