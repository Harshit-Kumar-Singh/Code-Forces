#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    ll curr = 1;
    ll count=0;
    for(int i=1;i<=m;i++){
        ll x;
        cin>>x;
        if(curr<=x){
            count +=abs(curr-x);
            curr = x;
        }
        else{
            count +=abs((n-curr)+x);
            curr = x;
        }
    }
    cout<<count<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll test;
    //cin >> test;
    //while (test--)
    //{
    solve();
    //}
    return 0;
}