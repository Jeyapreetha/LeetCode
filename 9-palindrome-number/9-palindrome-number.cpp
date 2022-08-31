class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long  x1 = 0,y = x;
        while(x)
        {
            x1 = x1 * 10 + x % 10; 
            x = x / 10;
        }
        if(y == x1)
            return true;
        return false;
    }
};