class Solution {
public:
    bool validPalindrome(string s) {

        int Oleft = 0;
        int Oright = s.size() - 1;

        while (Oleft < Oright) {

            if (s[Oleft] != s[Oright])
                break;

            Oleft++;
            Oright--;
        }

        if (Oleft >= Oright)
            return true;

        int left = Oleft + 1;
        int right = Oright;

        while (left < right) {

            if (s[left] != s[right])
                break;

            left++;
            right--;
        }

        if (left >= right)
            return true;

        right = Oright - 1;
        left = Oleft;

        while (left < right) {

            if (s[left] != s[right])
                break;

            left++;
            right--;
        }

        if (left >= right)
            return true;

        return false;
    }
};
