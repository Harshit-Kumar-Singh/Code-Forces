#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll count1[n + 1] = {0};
    ll count2[n + 1] = {0};
    for (int i = 0; i < n + 1; i++)
    {
        count1[i] = 0;
        count2[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count1[v[i]] = i + 1;
        count2[v[i]] = (n - i);
    }
    ll sum1 = 0;
    ll sum2 = 0;
    ll q;
    cin >> q;
    while (q--)
    {
        ll no;
        cin >> no;
        sum2 += count2[no];
        sum1 += count1[no];
    }
    cout << sum1 << " " << sum2 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}