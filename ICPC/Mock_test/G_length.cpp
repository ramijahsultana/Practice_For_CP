#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int l = s.size();
        int pos = s.find('0');
        if (pos == string::npos)
        {
            cout << len << " " << "0" << "\n";
        }
        else
        {
            cout << len << " " << pos - 1 << "\n";
        }
        
        cout << len  << " " << l << "\n";
    }

    return 0;
}