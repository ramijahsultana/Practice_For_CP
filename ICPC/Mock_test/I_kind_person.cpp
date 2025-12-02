// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     int cs = 1;
//     while(t--)
//     {
//         int n;
//         cin >> n;
        
//         vector<int> a(n+1);
//         for(int i=1; i<=n; i++)
//         {
//             cin >> a[i];
//         }
//         bool find = false;
//         int idx ;
//         for(int i=1; i<=n; i++)
//         {
//             if(a[i] < a[i+1] && a[i] > a[i-1])
//             {
//                 find = true;
//                 idx = i;
//                 break;
//             }
//         }
//         if(find) 
//         {
//             cout << "Case " << cs << ": " << idx << "\n";
//         }
//         else
//         {
//             cout << "Case " << cs << ": " << "Humanity is doomed!" << "\n";
//         }
//         cs++;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int x=1; x<=t; x++){
        int n;
        cin>>n;
        vector<long long> a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        
        vector<long long>maxF(n+1), minB(n+2);
        maxF[1]=a[1];
        for(int i=2; i<=n; i++){
            maxF[i]=max(maxF[i-1], a[i]);
        }
        minB[n]=a[n];
        for(int i=n-1; i>=1; i--){
            minB[i]=min(minB[i+1], a[i]);
        }      
        int ans=-1;
        for(int i=1; i<=n; i++){
            bool tall=(i==1||a[i]>maxF[i-1]);
            bool shorter=(i==n||a[i]<minB[i+1]);
            if(tall && shorter){
                ans=i;
                break;
            }            
        }
        cout<<"Case "<<x<<": ";
        if(ans!=-1){
            cout<<ans<<endl;
        }
        else{
            cout<<"Humanity is doomed!"<<endl;
        }
    }
    return 0;
}