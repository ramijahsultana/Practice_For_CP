#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    char c;
    for (int i = 0; i < s.size(); i++)
    {
        int j = i + 1;
        if (s[i] > s[j])
        {
            c = s[i];
            s[i] = s[j];
            s[j] = c;

            j++;
        }
        
    }
    cout << s << endl;
    return 0;
}