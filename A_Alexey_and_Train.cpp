#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n;
    vector<ll> dif;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
        ll x = ciel(abs(a - b) / 2.0);
        dif.push_back(x);
    }
    vector<ll> time;
    for (int i = 0; i < n; i++)
    {
        ll tim;
        cin >> tim;
        time.push_back(tim);
    }
    for (int i = 0; i < n; i++)
    {
        
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