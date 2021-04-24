#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll count=0;
    for(auto x:v){
        if(x<=0){
            continue;
        }
        if(x>=v[k-1]){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}