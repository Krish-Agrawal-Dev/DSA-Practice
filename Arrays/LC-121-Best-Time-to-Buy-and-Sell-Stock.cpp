class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int cheapest = prices[0], maxp = 0, profit = 0;
        
        for(auto x : prices){
            if (x < cheapest)
            {
                cheapest = x;
            }
            
            profit = x - cheapest;

            if (maxp < profit )
            {
                maxp = profit;
            }
        }

        return maxp;
        
    }
};
