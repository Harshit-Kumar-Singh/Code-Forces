#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll max_ele = -1;
    ll min_ele = INT_MAX;
    unordered_set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll count = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1] + 1)
        {
            count=count+(v[i]-v[i-1])-1;
        }
    }
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}