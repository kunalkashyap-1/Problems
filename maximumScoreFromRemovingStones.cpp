#include <bits/stdc++.h>
using namespace std;

int maximumScore(int a, int b, int c) {
    vector<int> arr={a,b,c};
    int score=0;
    sort(arr.begin(),arr.end());
    if(arr[2]>=arr[0]+arr[1]){
        score=arr[0]+arr[1];
    }
    else{
        score=(arr[0]+arr[1]+arr[2])/2;
    }
    return score;
}

int main()
{
    cout<<maximumScore(4,4,6)<<endl;
    return (0);
}