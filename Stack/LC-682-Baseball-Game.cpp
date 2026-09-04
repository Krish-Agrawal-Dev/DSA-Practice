class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> stk;
        int sum = 0;
        
        for(auto x : operations){

            if (x =="C")
            {
                stk.pop();
            }
            
            else if (x == "D")
            {
                stk.push(2 * stk.top());
            }

            else if (x == "+")
            {
                int temp = stk.top();
                stk.pop();
                int s = temp + stk.top();
                stk.push(temp);
                stk.push(s);
            }

            else stk.push(stoi(x));
        }
        
        while (!stk.empty())
        {
            sum += stk.top();
            stk.pop();
        }
        
        return sum;
    }
};
