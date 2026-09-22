class Solution {
public:
    int atMost(const vector<int>& nums, int goal) {

        if(goal == -1)
            return 0;

        int count = 0;
        int right = 0;
        int left = 0;
        int sum = 0;

        while (right < nums.size()) {

            sum += nums[right];

            while (sum > goal) {

                sum -= nums[left];
                left++;
            }

            count += right - left + 1;

            right++;
        }

        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};
