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
        int r1, r2, b;
        cin >> r1 >> r2 >> b;
        double crr = 0.0;
        int balls_played = 300 - b;
        if (balls_played > 0)
            crr = r2 / (balls_played / 6.0);

    
        double rrr = 0.0;
        int runs_needed = r1 - r2 + 1;
        if (runs_needed <= 0)
            rrr = 0.0;
        else
            rrr = runs_needed / (b / 6.0);

        cout << fixed << setprecision(2)
             << crr << " " << rrr << "\n";
    }

    return 0;
}