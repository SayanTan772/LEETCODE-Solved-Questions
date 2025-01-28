class Solution {
public:
    int hammingWeight(int n) {
        int binaryNum[32];
        int i = 0, count = 0;

        while (n > 0) {
        binaryNum[i] = n % 2;
        if(binaryNum[i] == 1) {
            count++;
        }
        n = n / 2;
        i++;
        }

        return count;
    }
};