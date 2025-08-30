#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool found = false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1' && s[i+1] == '0' && s[i+2]=='1')
            {
                found = true;
            }
            else if (s[i]=='0' && s[i+1] == '1' && s[i+2]=='0')
            {
                found = true;
            }
        }
        if(found)
        {
            cout << "Good" << endl;
        }
        else
            cout << "Bad" << endl;

    }

    return 0;
}