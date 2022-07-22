#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string &s) {
        int n=s.length();
        if(n<=1)return n;
        int i=0,j=0,len=0;
        map<char,int>temp;
        while(j<n)
        { 
            temp[s[j]]++;
            if(temp.size()==(j-i+1))
            {
              len=max(len,j-i+1);
              j++;
            }
            else if(temp.size()<(j-i+1))
            {
                while(temp.size()<(j-i+1))
                {
                    temp[s[i]]--;
                    if(temp[s[i]]==0)
                      temp.erase(s[i]);
                    i++;
                }
                if(temp.size()==(j-i+1))
                len=max(len,j-i+1);
              j++;
            }
        }
        return len;
    }

    void display(string &s){
        for(char x: s){
            cout<<x<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    string s = "abcabcbb";
    Solution s1;
    s1.display(s);
    int length=s1.lengthOfLongestSubstring(s);
    cout<<length<<endl;
    return (0);
}