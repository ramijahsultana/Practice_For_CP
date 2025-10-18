#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    int val = *min_element(a.begin(), a.end());

    for(int i=0; i<n; i++)
    {
        if(a[i] == val)
        {
            cout << val << " " << i+1 << "\n";
            break;
        }
    }

    return 0;
}