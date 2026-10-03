class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int count = 1;
        int countMax = 0;

        unordered_set<int> us;

        for (auto& x : nums) {

            us.insert(x);
        }

        for (auto x : us) {

            if (us.count(x + 1))
                continue;

            while (us.count(x - 1)) {

                count++;
                x--;
            }

            countMax = max(countMax, count);
            count = 1;
        }

        return countMax;
    }
};
