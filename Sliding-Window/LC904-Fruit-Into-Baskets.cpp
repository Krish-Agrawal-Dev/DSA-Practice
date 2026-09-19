class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int count = 0;
        int total = 0;
        int left = 0;
        int right = 0;
        int distinct = 0;

        unordered_map<int, int> freq;

        while (right < fruits.size()) {

            if (freq[fruits[right]] == 0)
                distinct++;

            freq[fruits[right]]++;

            while (distinct > 2) {

                freq[fruits[left]]--;

                if (freq[fruits[left]] == 0)
                    distinct--;

                left++;
            }

            count = right - left + 1;

            total = max(total, count);

            right++;
        }

        return total;
    }
};
