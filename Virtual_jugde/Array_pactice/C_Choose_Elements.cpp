#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());
    int mx_sum = 0;
    for(ll i=0; i<k; i++)
        mx_sum += a[i];

    cout << mx_sum << "\n";    
    
    return 0;
}