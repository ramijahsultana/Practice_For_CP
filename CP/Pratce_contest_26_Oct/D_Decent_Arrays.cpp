#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    bool decent = true;
    for(int i=0; i<n-1; i++)
    {
        if(v[i] > v[i+1])
        {
            decent = false;
            break;
        }
    }
    if(decent)
        cout << "Yes\n";
    else
        cout << "No\n";   

    return 0;
}