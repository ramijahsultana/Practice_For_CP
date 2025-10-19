#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
   
    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        while(a[i] % 2 == 0)
        {
            a[i] /= 2;
            cnt++;
        }
        mn = min(mn, cnt);

    }

    cout << mn << "\n";
    return 0;
}