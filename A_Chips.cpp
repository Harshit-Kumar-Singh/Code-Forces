#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
   ll n , m;
   cin >>n>> m;
   ll sum=  (n*(n+1))/2;
   if(sum==m){
       cout<<0<<endl;
       return;
   }
   while(sum<m){
       m = abs(m-sum);
   }
  // cout<<m<<endl;
   for(int i=1;i<=n;i++){
      
       if(m<i){
           break;
       }
       m=m-i;
       
   }
   cout<<m<<endl;

  


}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}