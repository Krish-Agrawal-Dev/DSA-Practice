class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;

        int left = 1, right = num / 2;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long long sqr = 1LL * mid * mid;

            if (sqr < num)
                left = mid + 1;

            else if (sqr > num)
                right = mid - 1;

            else
                return true;
        }

        return false;
    }
};
