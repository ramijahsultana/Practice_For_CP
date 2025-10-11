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

    vector<ll> b = a;   
    sort(a.begin(), a.end());
    int left = 0, right = a.size() - 1;
    while(left < right)
    {
        ll sum = a[left] + a[right];
        if(sum == target)
        {
            int lval = left, rval = right;
            break;
        }
        else if(sum < target) left++;
        else right--;
    }

    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == a[left])
        {
            cout << i << " ";
        }
        else if(b[i] == a[right])
        {
            cout << i << " ";
        }
    }

    return 0;
}