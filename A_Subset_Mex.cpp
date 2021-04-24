#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    set<ll> s1;
    set<ll> s2;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    s1.insert(v[0]);
    for(int i=1;i<n;i++){
        if(v[i-1]+1==v[i]){
            s1.insert(v[i]);
        }
        else{
            s2.insert(v[i]);
        }
        
    }
    vector<ll> v1;
    vector<ll> v2;
    for(auto x:s1){
        v1.push_back(x);
    }
   
    for(auto x:s2){
       v2.push_back(x);
    }
    int ele1=0,ele2=0;
   for(int i=0;i<v1.size();i++){
       
       if(ele1!=v1[i]){
           break;
       }
       else{
           ele1++;
       }
   }
   for(int i=0;i<v2.size();i++){
       if(ele2!=v2[i]){
           break;
       }
       else{
           ele2++;
       }
   }
   //cout<<ele1<<" "<<ele2<<endl;
   cout<<ele1+ele2<<endl;
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
} 