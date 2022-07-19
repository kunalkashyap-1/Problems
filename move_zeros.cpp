#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int last_zero=0,cur=0;cur<nums.size();cur++){
            if(nums[cur]!=0)
            swap(nums[last_zero++],nums[cur]);
        }

    }

    void display(vector<int> &nums){
        for(int x: nums){
            cout<<x<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    vector<int> nums={0,1,0,3,12};
    Solution s1;
    int val=clock();
    s1.moveZeroes(nums);
    cout<<(val=clock()-val)<<"ms"<<endl;  
    s1.display(nums);
    return (0);
}