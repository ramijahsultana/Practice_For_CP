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

    for(int i=0; i<n; i++)
    {
        if(a[i] <= 10)
        {
            cout << "A[" << i << "] = " << a[i] << "\n";
        }
    }    

    return 0;
}