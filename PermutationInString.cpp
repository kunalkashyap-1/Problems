#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;

        int i=0;
        int j=0;
        map<char,int> str1;

        for(auto x: s1){
            str1[x]++;
        }
        int count = str1.size();
        int k=s1.size();
        
        while(j<s2.size()){
            if(str1.find(s2[j])!=str1.end()){
                str1[s2[j]]--;
                if(str1[s2[j]]==0){
                    count--;
                }
            }

            if((j-i+1)<k){
                j++;
            }
            else if((j-i+1)==k){
                if(count==0){
                    return true;
                }
                if(str1.find(s2[i])!= str1.end()){
                    str1[s2[i]]++;
                    if(str1[s2[i]]==1){
                        count++;
                    }
                }
                i++;
                j++;
            }
            }
            return false;
        }
    };

int main()
{
    string s1,s2;
    s1 = "ab";
    s2 = "eidbaooo";
    Solution sol1;
    cout<<sol1.checkInclusion(s1,s2)<<endl;

    return (0);
}