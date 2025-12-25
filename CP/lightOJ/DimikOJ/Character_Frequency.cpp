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
        char c;
        cin >> c;
        int count = 0;
        for(auto ch : s)
        {
            if(ch == c)
            {
                count++;
            }
        }
        cout << "Occurrence of '" << c << "' in '" << s << "' = " << count << "\n";


    }

    return 0;
}