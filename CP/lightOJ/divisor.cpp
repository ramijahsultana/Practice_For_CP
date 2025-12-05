#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int j = 1; j<=t; j++)
    {
        int n;
        cin >> n;
        cout << "Case " << j << ": ";
        for(int i= 1; i<=n; i++)
        {
            if(n%i==0)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}