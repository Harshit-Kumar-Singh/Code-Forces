#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> first;
    vector<ll> second;
    vector<ll> painter;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        first.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        second.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        painter.push_back(x);
    }
    vector<pair<ll, ll>> check;
    vector<ll> index;
    for (int i = 0; i < n; i++)
    {
        if (first[i] != second[i])
        {
            check.push_back(make_pair(first[i], second[i]));
            index.push_back(i);
        }
    }
    vector<ll> final_index;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < check.size(); j++)
        {
            if (check[j].second == painter[i])
            {
                final_index.push_back(index[j]+1);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
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