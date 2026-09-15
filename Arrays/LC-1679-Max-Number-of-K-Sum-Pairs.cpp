class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        int opt = 0;

        while(left < right){

            int sum = nums[left] + nums[right];
            if(sum == k){

                opt++;
                left++;
                right--;
            }

            else if(sum < k) left++;

            else right--;
        }
        
        return opt;
    }
};
