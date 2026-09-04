class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> ans;
        unordered_set<int> us;

        for (auto x : nums1)
        {
            us.insert(x);
        }

        for (auto x : nums2)
        {

            if (us.count(x))
            {
                ans.push_back(x);
                us.erase(x);
            }
        }

        return ans;
    }
};
