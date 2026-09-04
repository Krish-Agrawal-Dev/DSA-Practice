class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> um;

        for(auto x : nums){

            um[x]++;

            if (um[x] > nums.size()/2)
            return x;
        }

    }
};
