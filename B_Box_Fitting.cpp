#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    ll W;
    cin >> n >> W;
    ll sum = 0;
    vector<ll> v;
    ll count = 0;
    map<ll,ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll full_sum = 0;
    ll len = W;

    for (int i = 0; i < n; i++)
    {
        if(m.lower_bound(W)!=m.end()){
            auto  it = m.lower_bound(W);
            auto x = *it;
            m[x]--;
        }
        else{
            count++;
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