#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(ll a, ll b)
{
    return a > b;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll idx_prev = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            idx_prev = i;
            break;
        }
    }
    vector<ll> v;
    for (int i = idx_prev + 1; i < s.length(); i++)
    {
        if (s[i] == '1')
        {

            ll no = abs(idx_prev - i) - 1;
            if (no >= 1)
            {
                v.push_back(no);
            }
            idx_prev = i;
        }
    }
    if (v.empty() == true)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if()
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