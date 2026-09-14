class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int mArea = 0;

        while (left < right) {

            int area = (right - left) * min(height[left], height[right]);

            if (area > mArea) {

                mArea = area;
            }

            if (height[left] > height[right]) {

                right--;
            }

            else
                left++;
        }

        return mArea;
    }
};
