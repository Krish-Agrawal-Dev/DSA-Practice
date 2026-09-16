class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int left = 0;
        int right = k - 1;

        int tvr = left;
        int sum = 0;

        while (tvr <= right) {

          sum += nums[tvr];
          tvr++;
        }

        double cAvg = (double)sum / k;
        double mAvg = cAvg;

        while (right + 1 < nums.size()) {

            right++;
            sum = sum - nums[left] + nums[right];
            left++;

            cAvg = (double)sum / k;
            mAvg = max(mAvg, cAvg);
        }

        return mAvg;
    }
};
