#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    ll n;
    cin >> n;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
       
        v.push_back(x) ;
   }
  
   sort(v.begin(),v.end());
   ll idx =-1;
   for(int i=0;i<n-1;i++){
       
       if(v[i]!=v[i+1]){
           //cout<<v[i]<<endl;
           idx =i+1;
           break;
       }
   }
   if(idx==-1){
       cout<<0<<endl;
       return;
   }
   cout<<n-idx<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}