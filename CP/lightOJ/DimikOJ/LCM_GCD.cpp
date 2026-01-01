#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll gcd = __gcd(a, b);
        ll lcm = (a / gcd) * b;

        cout << "LCM = " << lcm << endl;
    }

    return 0;
}