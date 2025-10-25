#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    while (q--)
    {
        ll x;
        cin >> x;
        if (find(a.begin(), a.end(), x) != a.end())
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
    }
    return 0;
}