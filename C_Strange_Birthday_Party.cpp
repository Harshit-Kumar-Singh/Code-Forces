#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(ll a, ll b)
{
    return a > b;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    vector<ll> cost;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        cost.push_back(x);
    }
    sort(v.begin(), v.end(), compare);
    ll sum =0;

    for (int i = 0; i <n; i++)
    {
        if(i<m)
            sum+=min(cost[v[i]-1],cost[i]);
        else 
            sum+=cost[v[i]-1];
    }  
    cout<<sum<<endl;
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