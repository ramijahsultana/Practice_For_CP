#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        int zeros = 0;
        while(N > 0)
        {
            N /= 5;
            zeros += N;
        }

        cout << zeros << "\n";
    }

    return 0;
}
