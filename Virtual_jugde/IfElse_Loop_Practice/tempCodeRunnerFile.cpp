#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isPrime[n + 1];

    for (int i = 0; i <= n; i++)
    {
        isPrime[i] = true;
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i*i; j <= n; j+=i)
            {
                isPrime[j] = false;
                break;
            }
        }
    }
    for(int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}