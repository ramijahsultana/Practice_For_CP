#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];

    int pri_sum = 0, sec_sum = 0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
              pri_sum += a[i][j];
            if((i+j) == n-1) 
                sec_sum += a[i][j];
        }
    }

    int diff = abs(pri_sum - sec_sum);
    cout << diff << "\n";
        
            

    return 0;
}