#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll x = 1;
    vector<ll> v;
    ll count[n + 1] = {0};
    for (int i = 0; i <= n; i++)
    {
        count[i] = 0;
    }
    ll max1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        count[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        max1 = max(count[i], max1);
    }
    cout << max1 << endl;
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