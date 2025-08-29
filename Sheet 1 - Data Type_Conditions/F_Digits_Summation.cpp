#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;

    long long int a = n % 10;
    long long int b = m % 10;
    int summation = a + b;
    cout << summation << endl;
    return 0;
}