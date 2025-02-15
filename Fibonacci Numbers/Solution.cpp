class Solution {
    public:
        int fib(int n) {
            if(n == 1 || n == 2) {
                return 1;
            } else if (n == 0) {
                return 0;
            }
    
            int prev1 = 0, prev2 = 1, sum = 0;
            for(int i=2;i<=n;i++) {
                sum = prev1 + prev2;
                prev1 = prev2;
                prev2 = sum;
            }
    
            return sum;
        }
    };