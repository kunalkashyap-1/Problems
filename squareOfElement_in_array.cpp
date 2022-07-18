#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums){
        int j=0;
        for(int i=0;i<nums.size();i++){
            nums[j]=nums[i]*nums[i];
            j++;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};


int main()
{
    vector<int> nums;
    nums={-4,-1,0,3,10};
    Solution s1;
    s1.sortedSquares(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return (0);
}