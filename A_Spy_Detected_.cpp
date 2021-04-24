#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    map<ll,ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    int ele =-1;
    for(auto it:m){
        if(it.second==1){
           ele = it.first;
        }
    }
    for(int i=0;i<v.size();i++){
        if(ele==v[i]){
            cout<<i+1<<endl;
            return;
        }
    }
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