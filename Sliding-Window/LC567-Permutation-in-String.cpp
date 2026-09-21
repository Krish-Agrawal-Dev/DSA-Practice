class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size())
            return false;

        int len = s1.size();
        int match = 0;

        unordered_map<char, int> freq;
        unordered_map<char, int> freq2;

        for (int i = 0; i < len; i++) {
            freq[s1[i]]++;
            freq2[s2[i]]++;
        }

        for (auto it : freq) {
            if (freq2[it.first] == it.second)
                match++;
        }

        int required = freq.size();

        if (match == required)
            return true;

        for (int i = len; i < s2.size(); i++) {

            char in = s2[i];

            if (freq.count(in) && freq2[in] == freq[in])
                match--;

            freq2[in]++;

            if (freq.count(in) && freq2[in] == freq[in])
                match++;

            char out = s2[i - len];

            if (freq.count(out) && freq2[out] == freq[out])
                match--;

            freq2[out]--;

            if (freq.count(out) && freq2[out] == freq[out])
                match++;

            if (match == required)
                return true;
        }

        return false;
    }
};
