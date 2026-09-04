class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> um;
        int check = 0;

        for(int i = 0; i < nums.size(); i++){

            check = target - nums[i];

            if (um.count(check))
            {
                return {i,um[check]};
            }

            um[nums[i]] = i;
        }

        return {};
    }
};
