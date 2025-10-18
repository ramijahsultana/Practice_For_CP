#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n-1);
    for(int i = 0; i < n-1; i++)
        cin >> a[i];
    
    sort(a.begin(), a.end());
    bool found = false;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] != i+1)
        {
            cout << i+1 << "\n";
            found = true;
            break;
            return 0;
        }
    }
    
    if(!found)
        cout << n << "\n";

    return 0;
}