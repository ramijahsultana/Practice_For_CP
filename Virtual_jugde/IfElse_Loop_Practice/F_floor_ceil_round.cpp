#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    
    float div = x / y;
   
    int f = floor(div);
    int c = ceil(div);
    int r = round(div);

    cout << "floor " << x << " " << "/ " << y << " " << "=" << " " << f << endl;
    cout << "ceil " << x << " " << "/ " << y << " " << "=" << " " << c << endl;
    cout << "round " << x << " " << "/ " << y << " " << "=" << " " << r << endl;


    return 0;
}