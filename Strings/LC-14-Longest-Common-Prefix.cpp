class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        string s = strs[0];

        for (int i = 1, j = 0; i < strs.size();)
        {

            if (j < strs[i].size() && j < s.size() && s[j] == strs[i][j])
            {

                j++;
            }

            else
            {

                s.resize(j);

                j = 0;
                i++;
            }
        }

        return s;
    }
};
