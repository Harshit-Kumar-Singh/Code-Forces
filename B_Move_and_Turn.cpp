#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll N = 1000;
vector<ll> cum_vec(){
    vector<ll> v;
    v.push_back(0);
    v.push_back(4);
    v.push_back(4);
    for(int i=3;i<=N/2;i+=2){
        v.push_back(v[i-1]+v[i-2]+4);
        v.push_back(v[i-1]+v[i-2]+4);
    }
    return v;
}
void solve()
{
   ll n;
   cin >> n;
   vector<ll> ans = cum_vec();
  for(int i=0;i<=n;i++){
      cout<<i<<" "<<ans[i]<<endl;
  }
  cout<<endl;
   // cout<<ans[n]<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
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