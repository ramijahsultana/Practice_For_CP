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
        int lenS = s.size();

        if(lenS <= 10)
        {
            cout << s << endl;
        }
        else
        {
            int len = lenS - 2;
            string last_word = s.substr(lenS-1);
            cout << s[0] << len << last_word << endl;
        }
    }
    return 0;
}