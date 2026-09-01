class Solution {
public:
    bool isPalindrome(int x) {
        int revnum = 0;
        int dup = x;

        if (x < 0)
            return false;

        while (x != 0) {
            int lastdigit = x % 10;

            if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10)
                return false;

            revnum = revnum * 10 + lastdigit;
            x /= 10;
        }

        if (revnum == dup)
            return true;
        else
            return false;
    }
};