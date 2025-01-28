class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev = 0;
        bool flag = true;

        if(x < 0) {
            flag = false;
        }

        long long int num = x;

        while(x) {
            long long int rem = x % 10;
            rev = rev*10 + rem;
            x = x/10;
        }

        if(flag) {
        if(rev == num) {
            return true;
        } else {
            return false;
            }
        } else {
            return false;
        }

    }
};