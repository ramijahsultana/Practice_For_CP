#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;
        for(ll i =0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cout << "*";
            }   
            cout << "\n";
        }

        if (tc != t) cout << "\n"; 
    }
    return 0;
}
