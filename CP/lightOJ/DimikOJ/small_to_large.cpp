#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    int j = 1;
    
    while(t--)
    {   
        cout << "Case " << j << ": ";
        string s;
        getline(cin, s);
        int x;
        stringstream ss(s);
        vector<int> v;
        while(ss >> x)
        {
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        j++;
    }

    return 0;
}