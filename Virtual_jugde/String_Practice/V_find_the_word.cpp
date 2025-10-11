#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    auto it = find(s.begin(), s.end(), t);
    int cnt =0;
    while(s.size())
    {
        if(it != s.end())
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}