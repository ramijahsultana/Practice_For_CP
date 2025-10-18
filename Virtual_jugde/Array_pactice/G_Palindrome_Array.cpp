#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++)
        cin >> a[i];

    vector<ll> b = a;
    reverse(b.begin(), b.end());
    bool is_palindrome = true;
    for(ll i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            is_palindrome = false;
            break;
        }
    }

    if(is_palindrome)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}