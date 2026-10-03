class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if (p.size() > s.size())
            return {};

        vector<int> ans;

        unordered_map<char, int> freq;
        unordered_map<char, int> freq2;

        int match = 0;
        int len = p.size();

        for (int i = 0; i < len; i++) {

            freq[p[i]]++;
            freq2[s[i]]++;
        }

        for (auto it : freq) {

            if (freq2[it.first] == it.second)
                match++;
        }

        int required = freq.size();

        if (match == required)
            ans.push_back(0);

        for (int i = len; i < s.size(); i++) {

            char in = s[i];

            if (freq.count(in) && freq[in] == freq2[in])
                match--;

            freq2[in]++;

            if (freq.count(in) && freq[in] == freq2[in])
                match++;

            char out = s[i - len];

            if (freq.count(out) && freq[out] == freq2[out])
                match--;

            freq2[out]--;

            if (freq.count(out) && freq[out] == freq2[out])
                match++;

            if (match == required)
                ans.push_back(i - len + 1);
        }

        return ans;
    }
};
