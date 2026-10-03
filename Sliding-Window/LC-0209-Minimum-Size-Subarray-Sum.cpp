class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;
        int right = 0;

        int sum = nums[left];
        int minLength = INT_MAX;

        while (left <= right) {

            if (sum < target) {

                if (right + 1 >= nums.size())
                    break;

                right++;
                sum += nums[right];
            }

            else {

                int window = right - left + 1;

                if (window == 1)
                    return 1;

                sum -= nums[left];
                left++;

                minLength = min(minLength, window);
            }
        }

        if (minLength == INT_MAX)
            return 0;

        return minLength;
    }
};
