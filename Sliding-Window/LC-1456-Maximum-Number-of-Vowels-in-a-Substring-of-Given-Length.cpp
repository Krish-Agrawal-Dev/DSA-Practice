class Solution {
public:
    bool isVowel(char v) {

        if ((v == 'a') || (v == 'e') || (v == 'i') || (v == 'o') || (v == 'u'))
            return true;

        return false;
    }
    int maxVowels(string s, int k) {

        int left = 0;
        int right = k - 1;
        int tvr = 0;
        int vowel = 0;

        while (tvr <= right) {

            if (isVowel(s[tvr]))
                vowel++;

            tvr++;
        }

        int maxVowel = vowel;

        while (right + 1 < s.size()) {

            right++;

            if (isVowel(s[right]) && !isVowel(s[left])) {

                vowel++;
            }

            else if (!isVowel(s[right]) && isVowel(s[left])) {

                vowel--;
            }

            left++;

            maxVowel = max(maxVowel, vowel);
        }

        return maxVowel;
    }
};
