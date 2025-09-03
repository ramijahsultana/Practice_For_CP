#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    cin >> s >> ss;
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
    for (int i = 0; i < ss.size(); i++) {
        ss[i] = toupper(ss[i]);
    }
    
    if(s == ss)
        cout << "0" << endl;
    else if(s < ss)
        cout << "-1" << endl;
    else if(s > ss)
        cout << "1" << endl;
    return 0;
}