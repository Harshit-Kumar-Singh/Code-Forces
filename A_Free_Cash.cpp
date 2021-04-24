#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    unordered_map<string, int> ma;
    while (n--)
    {
        ll h, m;
        cin >> h >> m;
        ll x = h * 100 + m;
        string str = to_string(x);
        //cout<<str<<endl;
        ma[str]++;
    }

    int ans = INT_MIN;
    for (auto k : ma)
    {
        ans = max(ans,k.second);
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}