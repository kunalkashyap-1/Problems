#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> nums)
{
    for (int x : nums)
        {
            cout << x << " ";
        }
    int sum = 0;
    int i = 0;
    int j = 1;
    while (nums.size() > 1)
    {
        
        cout << endl;
        int csum = (nums[i] + nums[j]);
        sum = sum + csum;
        nums.erase(nums.begin());
        nums.erase(nums.begin());
        nums.push_back(csum);
    }

    return sum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << solve(nums) << endl;
    return (0);
}