// LeetCode 496 — Next Greater Element I
// Approach: Monotonic decreasing stack + hash map
// Time: O(nums2.size() + nums1.size()) average
// Auxiliary space: O(nums2.size())

#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> s;
        unordered_map<int, int> um;
        vector<int> ans;

        for (int i = 0; i < nums2.size(); i++) {

            while (!s.empty() && s.top() < nums2[i]) {

                um[s.top()] = nums2[i];
                s.pop();
            }

            s.push(nums2[i]);
        }

        while (!s.empty()) {

            um[s.top()] = -1;
            s.pop();
        }

        for (auto x : nums1) {

            ans.push_back(um[x]);
        }

        return ans;
    }
};
