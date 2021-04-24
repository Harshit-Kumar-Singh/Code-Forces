#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n, q;
    cin >> n >> q;
    unordered_map<ll, ll> m;
    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (m[x] == 0)
        {
            m[x] = i;
        }
    }

    for (int i = 0; i < q; i++)
    {
        ll t_;
        cin >> t_;
        cout << m[t_] << " ";
        for (auto it : m)
        {
            
            if (it.second < m[t_])
            {
                
                m[it.first]++;
            }
        }
        m[t_] = 1;
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}