#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    int x;
    while(cin >> x)
    {
        a.push_back(x);
    }
    if(a.empty()) return 0;
    int target = a.back();
    a.pop_back();

    for(int i=0; i< a.size(); i++)
    {
        target -= a[i];
        
    }

    return 0;
}