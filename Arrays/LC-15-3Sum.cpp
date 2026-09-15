class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        int fix = 0;

        while (fix < nums.size() - 2) {

            int left = fix + 1;
            int right = nums.size() - 1;

            if (fix > 0 && nums[fix] == nums[fix - 1]) {
                fix++;
                continue;
            }

            while (left < right) {

                int sum = nums[fix] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[fix], nums[left], nums[right]});

                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }

                else if (sum < 0)
                    left++;

                else
                    right--;
            }

            fix++;
        }

        return ans;
    }
};
