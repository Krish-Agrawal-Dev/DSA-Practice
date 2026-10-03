class Solution {
public:
    bool check(char x, char y, char z) {

        return ((z != y && z != x && x != y));
    }

    int countGoodSubstrings(string s) {

        int count = 0;

        for (int i = 2; i < s.size(); i++) {

            if (check(s[i - 2], s[i - 1], s[i])) {

                count++;
            }
        }

        return count;
    }
};
