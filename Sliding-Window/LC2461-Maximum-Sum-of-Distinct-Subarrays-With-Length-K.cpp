class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        int distinct = 0;
        long long sum = 0;

        for (int i = 0; i < k; i++) {

            if (freq[nums[i]] == 0)
                distinct++;

            freq[nums[i]]++;
            sum += nums[i];
        }

        long long maxSum = 0;

        if (distinct == k)
            maxSum = sum;

        int left = 0;
        int right = k - 1;

        while (right + 1 < nums.size()) {

            freq[nums[left]]--;

            if (freq[nums[left]] == 0)
                distinct--;

            right++;

            if (freq[nums[right]] == 0)
                distinct++;

            freq[nums[right]]++;

            sum += nums[right];
            sum -= nums[left];

            left++;

            if (distinct == k) {

                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }
};
