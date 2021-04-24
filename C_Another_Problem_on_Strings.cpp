#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll count_z=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')
        count_z++;
    }
    if(k==0){
        cout<<count_z<<endl;
        return;
    }
    ll dp[s.length()];
    for(int i=0;i<s.length();i++){
        dp[i] =0;
    }
    ll cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            cnt++;
        }
        dp[i] = cnt;
    }
    unordered_map<ll,ll> m;
    for(int i=0;i<s.length();i++){
        m[dp[i]]++;
    }
    
    
    ll ans=0;
    for(auto x:m){
        ll no = x.first-k;
        if(x.first==k){
            ans+=x.second;
        }
        if(m.find(no)!=m.end()){
            ans+=(x.second*m[no]);
        }
    }
    cout<<ans<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}