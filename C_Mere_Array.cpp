#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll compute(ll a, ll b)
{
    if (b == 0)
        return a;
    return compute(b, a % b);
}
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    unordered_set<ll> s;
    ll arr[n];
    ll min_element = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
        arr[i] = x;
        v.push_back(make_pair(x, i));
        min_element = min(x, min_element);
    }
    sort(v.begin(),v.end());
    for (ll i = 0; i < n; i++)
    {
        if (v[i].second == i)
        {
            continue;
        }
        else
        {
            //cout << v[i].first << "," << min_element << endl;
            if (v[i].first % min_element != 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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