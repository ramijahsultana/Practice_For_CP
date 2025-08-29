#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        
        
        if(s.find("101") || s.find("010"))
        {
            cout << "Good" << endl;
        }
        else
            cout << "Bad" << endl;


    }

    return 0;
}