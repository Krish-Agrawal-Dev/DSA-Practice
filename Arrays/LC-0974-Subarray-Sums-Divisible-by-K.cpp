class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int sum = 0;
        int count = 0;

        unordered_map<int, int> freq;

        freq[0] = 1;

        for (auto x : nums) {

            sum += x;
            int remainder = ((sum % k) + k) % k;

            if (freq.count(remainder)) {

                count += freq[remainder];
            }

            freq[remainder]++;
        }

        return count;
    }
};
