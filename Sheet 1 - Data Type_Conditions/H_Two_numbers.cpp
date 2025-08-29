#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int floor = n/m;
    int ceil = (n + m -1 )/m;
    int round = (n + m/2)/m;
    cout << "floor " << n << '/' << m << floor << endl;
    cout << "ceil " << n << '/' << m << ceil << endl;
    cout << "round " << n << '/' << m << round << endl;

    return 0;
}