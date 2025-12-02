#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MOD = 1000000007;
    const int MAXN = 1000000;
    vector<bool> isPrime(MAXN + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAXN; i++)
        if (isPrime[i])
            for (int j = i * i; j <= MAXN; j += i)
                isPrime[j] = false;

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
    
        long long ans = 0;

        for (int g = 2; g <= n; g++)
        {
            if (isPrime[g] && n % g == 0)
            {
                int m = n / g;
                if (m >= k + 1)
                {
                    // Calculate C(m-1, k) naively
                    long long res = 1;
                    for (int i = 0; i < k; i++)
                        res = res * (m - 1 - i) % MOD;
                    long long denom = 1;
                    for (int i = 1; i <= k; i++)
                        denom = denom * i % MOD;
                    // Modular inverse using fast power
                    long long inv = 1, a = denom, b = MOD - 2;
                    while (b)
                    {
                        if (b & 1)
                            inv = inv * a % MOD;
                        a = a * a % MOD;
                        b >>= 1;
                    }
                    res = res * inv % MOD;
                    ans = (ans + res) % MOD;
                }
            }
        }

        cout << ans << "\n";
    }


   return 0;
}