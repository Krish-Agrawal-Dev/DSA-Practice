class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int x = m - 1, y = n - 1, z = m + n - 1;

        while (x >= 0 && y >= 0)
        {

            if (nums2[y] > nums1[x])
            {

                nums1[z] = nums2[y];
                z--;
                y--;
            }

            else
            {

                nums1[z] = nums1[x];
                z--;
                x--;
            }
        }

        while(y >= 0){

            nums1[z] = nums2[y];
            z--;
            y--;
        }
    }
};
