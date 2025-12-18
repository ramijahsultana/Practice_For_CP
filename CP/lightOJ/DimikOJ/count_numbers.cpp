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
        getline(cin, s);

        stringstream ss(s);
        int x, count = 0;
        while(ss >> x)
        {
            count++;
        }
        cout << count << "\n";
    }

    return 0;
}