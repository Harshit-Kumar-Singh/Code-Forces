#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(ll a,ll b){
    return a>b ;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),compare);
   
    ll sum1 =0;
    ll sum2 =0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            if(v[i]%2==0)
                sum1+=v[i];
        }
        else{
            if(v[i]&1)
                sum2+=v[i];
                
        }
    }
    if(sum1==sum2)cout<<"Tie"<<endl;
    else if(sum1>sum2)cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
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