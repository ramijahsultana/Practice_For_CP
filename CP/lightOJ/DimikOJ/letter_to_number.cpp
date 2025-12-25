#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
       for(char ch : s)
        {
            cout << (ch - 'A' + 1);
        }
        cout << "\n";
    }

    return 0;
}