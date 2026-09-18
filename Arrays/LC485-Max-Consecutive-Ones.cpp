class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int sum = 0, maxOnes = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1)
                sum++;

            maxOnes = max(maxOnes, sum);

            if (nums[i] == 0)
                sum = 0;
        }

        return maxOnes;
    }
};
