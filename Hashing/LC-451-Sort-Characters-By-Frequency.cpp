class Solution {
public:
    string frequencySort(string s) {

        int n = s.size();
        int k = 0;

        unordered_map<char, int> freq;
        vector<vector<char>> bucket(n + 1);

        for (auto& x : s)
            freq[x]++;

        for (auto& x : freq)
            bucket[x.second].push_back(x.first);

        for (int f = n; f >= 1; f--) {

            for (char c : bucket[f]) {

                for (int count = 0; count < f; count++) {

                    s[k] = c;
                    k++;
                }
            }
        }

        return s;
    }
};
