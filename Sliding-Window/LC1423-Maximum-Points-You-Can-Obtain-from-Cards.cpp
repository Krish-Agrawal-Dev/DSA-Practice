class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum = 0;

        for (int i = 0; i < k; i++) {

            sum += cardPoints[i];
        }

        int maxPoints = sum;

        if (k == cardPoints.size())
            return maxPoints;

        int left = k - 1;
        int right = cardPoints.size() - 1;

        while (left != -1) {

            sum += cardPoints[right];
            sum -= cardPoints[left];

            right--;
            left--;

            maxPoints = max(maxPoints, sum);
        }

        return maxPoints;
    }
};
