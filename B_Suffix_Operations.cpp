#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(abs(x));
    }
    ll min1 = min(v[0], v[1]);
    ll min2 = min(v[n - 1], v[n - 2]);
    ll max1 = max(v[0], v[1]);
    ll max2 = max(v[n - 1], v[n - 2]);
    if (max1 >= max2)
    {
        v[0] = min1;
        v[1] = min1;
    }
    else
    {
        v[n - 1] = min2;
        v[n - 2] = min2;
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
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