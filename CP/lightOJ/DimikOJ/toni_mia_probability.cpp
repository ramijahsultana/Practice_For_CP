#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(int n)
{
    ll f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore(); 
    while(t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        map<string, int> freq;
        string word;
        int cnt = 0;
        while(ss >> word)
        {
            freq[word]++;
            cnt++;
            
        }
        
        ll fact = factorial(cnt);
        ll cnt_fact = 1;
        for(auto& p : freq)
        {
            cnt_fact *= factorial(p.second);
        }

       
        ll result = fact / cnt_fact;
        cout << "1/" << result << "\n";

    }

    return 0;
}