#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map<int, int> M;

    for (int i = 0; i < nums.size(); i++) {
    M[nums[i]]++;
    }

    int max = 0, result;

    for (auto it : M) {
        if(it.second > 1) {
            result = it.first;
            break;
        }
    }

    return result;

    }
};