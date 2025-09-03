#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool found = false;
    int cntE = 0;
    int cntG = 0;
    int cntY = 0;
    int cntP = 0;
    int cntT = 0;
    sort(s.begin(),s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'E' || s[i] == 'e')
        {
            cntE++;
        }
        else if(s[i] == 'G' || s[i] == 'g')
        {
            cntG++;
        }
        else if(s[i] == 'Y' || s[i] == 'y')
        {
            cntY++;
        }
        else if(s[i] == 'P' || s[i] == 'p')
        {
            cntP++;
        }
        else if(s[i] == 'T' || s[i] == 't')
        {
            cntT++;
        }
    }
    int mn = min({cntE, cntG, cntP, cntY, cntT});

    cout << mn << endl;
    return 0;
}