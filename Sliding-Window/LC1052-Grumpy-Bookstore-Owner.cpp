class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int unsatisfied = 0;
        int satisfied = 0;

        for (int i = 0; i < minutes; i++) {

            if (grumpy[i] == 1)
                unsatisfied += customers[i];

            else
                satisfied += customers[i];
        }

        int maxUnsatisfied = unsatisfied;

        for (int i = minutes; i < grumpy.size(); i++) {

            if (grumpy[i] == 1)
                unsatisfied += customers[i];

            else
                satisfied += customers[i];

            if (grumpy[i - minutes] == 1)
                unsatisfied -= customers[i - minutes];

            maxUnsatisfied = max(maxUnsatisfied, unsatisfied);
        }

        return satisfied + maxUnsatisfied;
    }
};
