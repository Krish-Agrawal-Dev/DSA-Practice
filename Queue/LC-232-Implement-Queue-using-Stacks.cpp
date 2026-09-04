class MyQueue
{
public:
    stack<int> mstack;
    stack<int> ostack;

    MyQueue()
    {
    }

    void push(int x)
    {
        ostack.push(x);
    }

    int pop()
    {

        while (!ostack.empty())
        {
            mstack.push(ostack.top());
            ostack.pop();
        }

        int temp = mstack.top();
        mstack.pop();

        while (!mstack.empty())
        {
            ostack.push(mstack.top());
            mstack.pop();
        }

        return temp;
    }

    int peek()
    {
        while (!ostack.empty())
        {
            mstack.push(ostack.top());
            ostack.pop();
        }

        int temp = mstack.top();

                       while (!mstack.empty())
        {
            ostack.push(mstack.top());
            mstack.pop();
        }

        return temp;
    }

    bool empty()
    {
        return ostack.empty();
    }
};
