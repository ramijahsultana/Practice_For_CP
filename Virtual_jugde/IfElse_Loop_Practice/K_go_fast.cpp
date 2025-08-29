#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        
        int val = 0;
        if (n < m)
        {
            int x = (m - n) % k;
            val = x + k;
            cout << val << endl;
        }
        else if (n > m)
        {
            int val = (n-m)/k;
            if(val == 0)
            {
                val = 1;
            }
            cout << val << endl;
        }
        else
        {
            val = 0;
            cout << val << endl;
        }

            
    }

    return 0;
}