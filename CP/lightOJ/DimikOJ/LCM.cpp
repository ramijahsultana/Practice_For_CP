#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i,n,m, icm = 1;
    cin >> n >> m;
    int mx = max(n,m);
    i = mx;
    while(1)
    {
        if(i%n == 0 && i%m == 0)
        {
            icm = i;
            break;
        }
        i += mx;
    }

    cout << icm << "\n";

    return 0;
}