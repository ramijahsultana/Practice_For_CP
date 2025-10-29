#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, y;
    while (cin >> x >> y)
    {
        ll total_sum = (y * (y + 1)) / 2;
        int a = x - 1;
        ll left_val = (a * (a + 1)) / 2;

        ll val = total_sum - left_val;

        cout << "Sum of " << x << " to " << y << " is -> " << val << "; ";
        cout << "\n";
    }

    return 0;
}