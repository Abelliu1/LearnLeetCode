/* No.7 Reverse Integer
描述：给定一个32位的signed integer求其逆
eg1: input:123
    output:321
eg2: input:-123
     output:-321
eg3: input:120
     output:21
Note: 存储范围	[-231 ,231-1]

解决方案：
https://leetcode.com/problems/reverse-integer/solution/
*/
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};