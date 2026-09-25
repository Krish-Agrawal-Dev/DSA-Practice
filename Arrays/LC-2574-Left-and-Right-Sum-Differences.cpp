class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int rightSum = 0;
        int leftSum = 0;
        int total = 0;

        for (auto x : nums) {

            total += x;
        }

        rightSum = total;

        for (int i = 0; i < nums.size(); i++) {

            int temp = nums[i];
            rightSum -= temp;
            nums[i] = abs(leftSum - rightSum);
            leftSum += temp;
        }

        return nums;
    }
};
