#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    int clear_day = 7-x-y;
    if (clear_day < 0)
        cout << 0 << endl;
    else
        cout << clear_day << endl;
    return 0;
}