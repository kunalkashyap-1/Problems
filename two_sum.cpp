#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0;
        int j=n-1;
        vector<int> vt;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                vt.push_back(i+1);
                vt.push_back(j+1);
                break;
            }
            else if(sum<target){
                i++;
            }
            else{
               j--;
            }
        }
        return vt;
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
    vector<int> nums={2,7,11,15};
    int target = 9;
    Solution s1;
    int val=clock();
    vector<int> vec=s1.twoSum(nums,target);
    cout<<(val=clock()-val)<<"ms"<<endl;  
    s1.display(vec);
    return (0);
}