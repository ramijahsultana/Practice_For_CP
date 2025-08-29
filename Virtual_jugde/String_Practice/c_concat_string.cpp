#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int lenS = s.size();
    int lenT = t.size();
    string c = s + t;
    cout << lenS << " " << lenT << endl;
    cout << c << endl;

    
    s[0] = t[0];
    t[0] = c[0];
    cout << s << " " << t << endl;

    return 0;
}