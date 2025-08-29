#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }

    return 0;
}

// isPrime[0] = false;
//     isPrime[1] = false;
//     for (int i = 0; i <= n; i++)
//     {
//         isPrime[i] = true;
//     }
//     for (int i = 2; i*i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             for (int j = i*i; j <= n; j+=i)
//             {
//                 isPrime[j] = false;

//             }
//         }
//     }
//     for(int i = 2; i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             cout << i << " ";
//         }
//     }
