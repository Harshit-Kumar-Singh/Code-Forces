#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    int i = n, fact = 1;
    while (n / i != n)
    {
        fact = fact * i;
        i--;
    }
    return fact;
}
void solve()
{
    vector<ll> v;
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
        v.emplace_back(x);
    }
    ll ans = 0;
    for (auto it : m)
    {
        if (it.second > 1)
        {
            ll f = factorial(it.second);

            if (it.first == 0)
            {
                f = f * f;
            }
            ans += f;
        }
    }
    cout << ans << endl;
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