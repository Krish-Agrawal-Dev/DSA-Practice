class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int n = timeSeries.size();
        int time = 0;

        for (int i = 0; i < n - 1; i++) {

            if (timeSeries[i] + duration - 1 < timeSeries[i + 1])
                time += duration;

            else
                time += timeSeries[i + 1] - timeSeries[i];
        }

        time += duration;

        return time;
    }
};
