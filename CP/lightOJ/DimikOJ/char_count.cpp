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

        int freq[26] = {0};
        bool printed[26] = {false};

        for(char ch : s)
        {
            freq[ch - 'a']++;
        }

        for(char ch : s)
        {
            int idx = ch - 'a';
            if(!printed[idx])
            {
                cout << ch << " = " << freq[idx] << "\n";
                printed[idx] = true;
            }
        }

        if(t) cout << "\n";
    }

    return 0;
}
