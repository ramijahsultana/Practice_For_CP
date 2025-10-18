#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
            cin >> a[i];

        int mn = INT_MAX;    
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                int val = a[i] + a[j] + j - i;

                if(mn > val)
                {
                    mn = val;
                }
            }
        }    

        cout << mn << "\n";
    }

    return 0;
}