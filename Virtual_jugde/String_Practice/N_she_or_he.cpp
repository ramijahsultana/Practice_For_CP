#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());
    int len = s.size();

    if(len % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" << endl;

    return 0;
}    