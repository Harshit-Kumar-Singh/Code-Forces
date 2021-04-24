#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    set<ll> s;
    ll cum_sum[n];
    for (int i = 0; i < n; i++)
    {
        cum_sum[i] = 0;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        cum_sum[i] = s.size();
        //cout << cum_sum[i] << " ";
    }
    //cout << endl;
    while (m--)
    {
        ll x;
        cin >> x;
        cout << cum_sum[x - 1] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}