#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isBalanced(string &s1)
{
    stack<char> st;
    for (auto x : s1)
    {
        if (x == '(')
        {
            st.push('(');
        }
        else if (x == ')')
        {

            if (st.empty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    return (st.empty());
}

int main()
{
    int val = clock();
    string s1;
    s1 = "a+b)(c*d)+c(e+q)+f";
    if (isBalanced(s1))
        cout << "This is Balanced Expression" << endl;
    else
        cout << "This is Not Balanced Expression" << endl;

    cout << (val = clock() - val) << " ms " << endl;
    return (0);
}