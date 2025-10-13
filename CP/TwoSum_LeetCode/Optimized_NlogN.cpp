#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> a;
    ll x;
    while (cin >> x)
    {
        a.push_back(x);
    }
    if (a.empty())
        return 0;

    ll target = a.back();
    a.pop_back();

    vector<ll> b = a;
    sort(a.begin(), a.end());
    int left = 0, right = a.size() - 1;
    ll val1 = -1, val2 = -1;

    while (left < right)
    {
        ll sum = a[left] + a[right];
        if (sum == target)
        {
            val1 = a[left];
            val2 = a[right];
            break;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }
    bool found = false;
    for (int i = 0; i < b.size(); i++)
    {
        if (!found && b[i] == val1)
        {
            cout << i << " ";
            found = true;
        }
        else if (b[i] == val2)
        {
            cout << i << " ";
        }   
    }
    cout << "\n";

    return 0;
}