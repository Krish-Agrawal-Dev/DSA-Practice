class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> stk;

        for (auto x : s)
        {
            if (x == '(')
                stk.push(')');

            else if (x == '{')
                stk.push('}');

            else if (x == '[')
                stk.push(']');

            else if (stk.empty())
                return false;

            else
            {
                if (stk.top() != x)
                    return false;

                stk.pop();
            }
        }

        return stk.empty();
    }
};
