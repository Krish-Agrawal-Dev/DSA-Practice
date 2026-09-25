class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        int leftSum = 0;
        int rightSum = 0;
        int total = 0;

        for (auto x : nums) {

            total += x;
        }

        for (int i = 0; i < nums.size(); i++) {

            rightSum = total - leftSum - nums[i];

            if (rightSum == leftSum)
                return i;

            leftSum += nums[i];
        }

        return -1;
    }
};
