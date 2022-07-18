#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[j] = nums[i] * nums[i];
            j++;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }

    vector<int> sortedSquare_twoPointers(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        vector<int> temp;
        while (i <= j)
        {
            int el1 = nums[i] * nums[i];
            int el2 = nums[j] * nums[j];
            if (el1 >= el2)
            {
                temp.push_back(el1);
                j--;
            }
            else
            {
                temp.push_back(el2);
                i++;
            }
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }

    void display(vector<int> &nums)
    {
        for (int x : nums)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> nums;
    nums = {-4, -1, 0, 3, 10};
    Solution s1;
    int time = clock();
    s1.sortedSquares(nums);
    s1.display(nums);
    cout << (time = clock() - time) << "ms" << endl;
    int val = clock();
    s1.sortedSquare_twoPointers(nums);
    s1.display(nums);
    cout << (val = clock() - val) << "ms" << endl;
    return (0);
}