#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &nums)
{
  for (int x : nums)
  {
    cout << x << " ";
  }
  cout << endl;
}

void rotate(vector<int> &nums, int k)
{
  int n = nums.size();
  k = k % n;
  reverse(nums.begin(), nums.begin() + (n - k));
  reverse(nums.begin() + (n - k), nums.end());
  reverse(nums.begin(), nums.end());
}

int main()
{
  vector<int> nums;
  nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  int val =clock();
  rotate(nums, k);
  cout<<(val=val-clock())<<"ms"<<endl;
  display(nums);
  return (0);
}