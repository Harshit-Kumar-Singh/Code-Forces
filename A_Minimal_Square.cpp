#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll min_v = min(a,b);
    ll max_v=  max(a,b);
    ll ans = max(min_v*2,max_v);
    cout<<ans*ans<<endl;
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