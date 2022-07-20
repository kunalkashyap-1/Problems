#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string &s)
    {
        int n = s.length();
        int start = 0;
        for (int end = 0; end < n; end++)
        {
            if(s[end]==' '){
                reverse(s, start, end-1);
                start=end+1;
            }
        }
        reverse(s,start,n-1);
        return s;
    }


void reverse(string &s, int start, int end)
{
    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

void display(string &s)
{
    for (char x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}
}
;

int main()
{
    string s;
    s = "Let's take LeetCode contest";
    Solution s1;
    int val = clock();
    s1.reverseWords(s);
    cout << (val = clock() - val) << "ms" << endl;
    s1.display(s);
    return (0);
}