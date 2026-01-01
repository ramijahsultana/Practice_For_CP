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
        cin.ignore();  
        int count = 0;
        for(auto ch : s)
        {
            if(ch == c)
            {
                count++;
            }
        }
        if(count > 0)
        {
            cout << "Occurrence of '" << c << "' in '" << s << "' = " << count << "\n";
        }
        else
        {
            cout << "'" << c << "' is not present" << "\n";
        } 
      


    }

    return 0;
}