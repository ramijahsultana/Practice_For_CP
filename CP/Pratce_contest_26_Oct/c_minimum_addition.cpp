#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int val = 0;
    if(x%n != 0)
        val = (n - (x%n));
    cout << val << endl;

   
    return 0;
}