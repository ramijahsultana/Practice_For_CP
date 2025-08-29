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
        string st;
        int len = s.size() + t.size();
        for(int i=0; i<len; i+=2)
        {
            
            st[i] = s[i];
            st[i+1] = t[i];
        }
        cout << st << endl;

    }
    return 0;
}