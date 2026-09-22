class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0;
        int right = 0;
        int cLen = 0;
        int mLen = 0;
        int zeroCount = 0;

        while (right < nums.size()) {

            if (nums[right] == 0)
                zeroCount++;

            cLen++;

            while (zeroCount > k) {

                cLen--;

                if (nums[left] == 0)
                    zeroCount--;

                left++;
            }

            mLen = max(cLen, mLen);

            right++;
        }

        return mLen;
    }
};
