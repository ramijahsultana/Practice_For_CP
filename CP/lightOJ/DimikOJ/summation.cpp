#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for(int i=0; i<5; i++)
        {
            if(i == 0 || i == 4)
            {
                sum += s[i] - '0';
            }

        }
        cout << "Sum = " << sum << "\n";
    }

    return 0;
}
