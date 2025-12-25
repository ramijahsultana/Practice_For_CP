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
        vector<char> v, c;
        for(char ch : s)
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                v.push_back(ch);
            }
            else if((ch >= 'b' && ch <= 'z'))
            {
                c.push_back(ch);
            }
        }

        for(char ch : v)
        {
            cout << ch;
        }
        cout << "\n";
        for(char ch : c)
        {
            cout << ch;
        }
        cout << "\n";
    }

    return 0;
}