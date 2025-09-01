#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if((s[i] == 'E'|| s[i] == 'e') && (s[i+1] == 'G' || s[i+1] == 'g') && (s[i+2] == 'Y' || s[i+2] == 'y') && (s[i+3] == 'P' || s[i+3] == 'p') && (s[i+4] == 'T' || s[i+4] == 't'))
            {
                s.replace(i, 5, " ");
            }
    }
    cout << s << endl;
    return 0;
}