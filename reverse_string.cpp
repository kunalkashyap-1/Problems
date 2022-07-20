#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }

    void display(vector<char> &s){
        for(char x: s){
            cout<<x<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    vector<char> s;
    s={'H','a','n','n','a','h'};
    Solution s1;
    int val = clock();
    s1.reverseString(s);
    cout<<(val=clock()-val)<<"ms"<<endl;
    s1.display(s);
    return (0);
}