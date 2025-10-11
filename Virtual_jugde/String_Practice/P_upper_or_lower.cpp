#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int small = 0;
    int big = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            big++;
        }
    }

    bool inshort = false;
    bool inlong = false;

    if (small >= big)
    {
        inshort = true;
    }
    else
        inlong = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (inshort)
        {
            s[i] = tolower(s[i]);
        }
        else
            s[i] = toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}