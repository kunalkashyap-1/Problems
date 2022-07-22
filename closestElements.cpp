#include <bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x)
{
    int n = arr.size(), left = 0, right = n - k - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (x - arr[mid] > arr[mid + k] - x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return vector<int>(arr.begin() + left, arr.begin() + left + k);
}

int main()
{

    return (0);
}