#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
        }

    }
    for(int x : v)
    {
        cout << x << "\n";
    }
    return 0;
}