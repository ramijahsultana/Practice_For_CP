#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore();

    while(T--)
    {
        string s;
        getline(cin, s);

        int count = 0;
        bool inWord = false;

        for(char ch : s)
        {
            if(isalpha(ch))
            {
                if(!inWord)
                {
                    count++;
                    inWord = true;
                }
            }
            else
            {
                inWord = false;
            }
        }

        cout << "Count = " << count << "\n";
    }

    return 0;
}
