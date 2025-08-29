#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   bool is_prime = false;
   if(n == 1)
   {
        cout << "NO" << endl;
   }
   for(int i=2; i<n; i++)
   {
        if(n%i == 0)
        {
            is_prime = true;
        }
   }
   if(is_prime)
      cout << "NO" << endl;
   else
      cout << "YES" << endl;

    return 0;
}