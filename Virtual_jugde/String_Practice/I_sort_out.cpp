#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                if (!t.empty())
                {
                    t.push_back(i);
                    s[i] = s[j];
                    s[j] = t[i];
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}