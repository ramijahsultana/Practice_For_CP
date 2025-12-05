#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 995;
    for(int i=1000; i>=1; i--)
    {
        if(i == n)
        {
            cout << "\n";
            n = n - 5;
        }
        cout << i << " ";
    }

    return 0;
}