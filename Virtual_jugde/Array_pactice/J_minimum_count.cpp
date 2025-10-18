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

    int mn_val = *min_element(a.begin(), a.end());
    int cnt =0;
    for(int i=0; i<n; i++)
        if(a[i] == mn_val)
            cnt++;
        
    if(cnt%2 == 1)
        cout << "Lucky\n";
    else
        cout << "Unlucky\n";    

    return 0;
}