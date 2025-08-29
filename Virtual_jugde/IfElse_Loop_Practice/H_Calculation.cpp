#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    char a;
    cin >> a;
    long long int y;
    cin >> y;

    if (a == '+')
    {
        long long int summation = x + y;
        cout << summation << endl;
    }
    else if (a == '-')
    {
        long long int subtraction = x - y;
        cout << subtraction << endl;
    }
    else if (a == '*')
    {
        long long int multiplication = x * y;
        cout << multiplication << endl;
    }  
    else if (a == '/')
    {
        long long int division = x / y;
        cout << division << endl;
    }

    return 0;
}