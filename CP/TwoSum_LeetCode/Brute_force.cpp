#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> a;
    ll x;
    while(cin >> x)
    {
        a.push_back(x);
    }
    if(a.empty()) return 0;

    ll  target = a.back();
    a.pop_back();

 
    for(int i=0; i<a.size(); i++)
    {
        for(int j=i+1; j<a.size(); j++)
        {
            if(a[i]+a[j] == target)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }


    return 0;
}