class Solution {
public:
    int lengthOfLastWord(string s) {

        int last = s.size() - 1;
        int length = 0;

        while (s[last] == ' ') {

            last--;
        }

        while (last >= 0 && s[last] != ' ') {

            length++;
            last--;
        }

        return length;
    }
};
