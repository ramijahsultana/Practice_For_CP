#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s, t;
        cin >> s >> t;
        string st ;
        int len = max(s.size(), t.size());
        for(int i=0; i<len; i++)
        {
            if(i<s.size())
                st.push_back(s[i]);
            if(i<t.size())   
                st.push_back(t[i]);
        }
        cout << st << endl;
    }
    return 0;
}