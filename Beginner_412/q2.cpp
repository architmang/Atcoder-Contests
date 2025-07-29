#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    set<char> st;
    cin >> s;
    cin >> t;
    for(auto ch: t)
        st.insert(ch);
    bool flag = true;
    for(int i=1; i<s.length(); i++)
    {
        if(isupper(s[i]))
        {
            if(st.find(s[i-1])==st.end())
            {
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}