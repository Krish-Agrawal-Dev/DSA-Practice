class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> s;

        for (const auto& x : asteroids) {

            bool destroyed = false;

            while (!s.empty() && (s.top() > 0 && x < 0)) {

                if (abs(s.top()) < abs(x)) {
                    s.pop();
                }

                else if (abs(s.top()) > abs(x)) {
                    destroyed = true;
                    break;
                }

                else {
                    s.pop();
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed)
                s.push(x);
        }

        vector<int> ans;

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
