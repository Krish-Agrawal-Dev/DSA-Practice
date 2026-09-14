class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {

        unordered_map<string, int> um;
        vector<string> ans;

        for (int i = 0; i < list1.size(); i++) {

            um[list1[i]] = i;
        }

        int least = INT_MAX;
        int sum;

        for (int i = 0; i < list2.size(); i++) {

            if (um.count(list2[i])) {

                sum = um[list2[i]] + i;

                if (sum < least) {

                    least = sum;
                }
            }
        }

        for (int i = 0; i < list2.size(); i++) {

            if (um.count(list2[i]) && um[list2[i]] + i == least) {

                ans.push_back(list2[i]);
            }
        }

        return ans;
    }
};
