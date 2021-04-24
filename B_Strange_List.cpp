#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll ele;
        cin >> ele;
        v.push_back(make_pair(ele, 1));
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first % x == 0)
        {
            v.push_back(make_pair(v[i].first / x, v[i].second * x));
        }
        else
        {
            break;
        }
    }
    ll sum = 0;
    for (auto x : v)
    {
        sum += (x.first * x.second);
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