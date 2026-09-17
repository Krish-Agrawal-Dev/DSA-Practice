class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int subarrays = 0;
        int sum = 0;

        for (int i = 0; i < k; i++) {

            sum += arr[i];
        }

        int target = threshold * k;

        if (sum >= target)
            subarrays++;

        for (int i = k; i < arr.size(); i++) {

            sum += arr[i];
            sum -= arr[i - k];

            if (sum >= target) {

                subarrays++;
            }
        }

        return subarrays;
    }
};
