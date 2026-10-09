class Solution {
public:
    int calculate(stack<int>& s, string op) {
        int a, b;

        if (op == "+") {
            b = s.top();
            s.pop();

            a = s.top();
            s.pop();

            return b + a;
        }
        else if (op == "-") {
            b = s.top();
            s.pop();

            a = s.top();
            s.pop();

            return a - b;
        }
        else if (op == "*") {
            b = s.top();
            s.pop();

            a = s.top();
            s.pop();

            return b * a;
        }
        else {
            b = s.top();
            s.pop();

            a = s.top();
            s.pop();

            return a / b;
        }
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (const auto& x : tokens) {
            if (x == "+" || x == "-" || x == "*" || x == "/") {
                int answer = calculate(s, x);
                s.push(answer);
            }
            else {
                s.push(stoi(x));
            }
        }

        return s.top();
    }
};