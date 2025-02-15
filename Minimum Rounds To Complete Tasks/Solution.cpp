#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    public:
        int minimumRounds(vector<int>& tasks) {
            unordered_map<int, int> map;
            int rounds = 0;
    
            for(int i=0; i<tasks.size(); i++) {
                map[tasks[i]]++;
            }
    
            for(auto it: map) {
                int val = it.second;
    
                if(val == 1) {
                    return -1;
                }
    
                if(val % 3 == 0) {
                    rounds += val / 3;
                } else {
                    rounds += (val / 3) + 1;
                }
            }
    
            return rounds;
        }
    };