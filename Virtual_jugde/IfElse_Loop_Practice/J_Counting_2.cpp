#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a; cin >> a;
    char x; cin >> x;
    long long int b; cin >> b;
    char y; cin >> y;
    long long int c; cin >> c;

    int sum = a+b;
    int sub = a-b;
    long long int mul = a*b;

    if(x == '+')
    {
        if(sum == c)
            cout << "Yes" << endl;
        else
            cout << sum << endl;
    }
    else if(x == '-')
    {
        if(sub == c)
            cout << "Yes" << endl;
        else
            cout << sub << endl;
    }
    else if(x == '*')
    {
        if(mul == c)
            cout << "Yes" << endl;
        else
            cout << mul << endl;
    }
   
   

    return 0;
}