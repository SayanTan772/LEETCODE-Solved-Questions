#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> map;
        int count = 0;

        for(int i=0;i<stones.length();i++) {
            map[stones[i]]++;
        }

        for(int k=0;k<jewels.length();k++) {
            if(map.find(jewels[k]) != map.end()) {
                count += map[jewels[k]];
            }
        }

        return count;
    }
};