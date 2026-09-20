class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int zeroCount = 0;
        int left = 0;
        int right = 0;
        int sum = 0;
        int maxSum = 0;

        while (right < nums.size()) {

            if (nums[right] == 0)
                zeroCount++;

            sum += nums[right];

            while (zeroCount > 1) {

                sum -= nums[left];

                if (nums[left] == 0)
                    zeroCount--;

                left++;
            }

            right++;

            maxSum = max(maxSum, sum);
        }

        if (zeroCount == 0)
            return nums.size() - 1;

        return maxSum;
    }
};
