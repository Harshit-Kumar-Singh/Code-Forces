#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool Is_All_Same(vector<ll> v){
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            return false;
        }
    }
    return true;
}
void solve(ll i)
{
   ll n;
   cin >> n;
   vector<ll> v;
   for(int i=0;i<n;i++){
       ll x;
       cin >> x;
       v.push_back(x);
   }
   if(a[1]>a[0]){
       cout<<-1<<endl;
       return;
   }
   if(Is_All_Same(v)){
       cout<<0<<endl;
       return;
   }
   if(isDecreasing()){

   }
   if(isIncreasing()){

   }

    
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        solve(i);
    }
} 