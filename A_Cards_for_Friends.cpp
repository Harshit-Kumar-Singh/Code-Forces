#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll w, h, n;
    cin >> w >> h >> n;
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    ll ans = 1;
    
    while (w % 2 == 0)
    {
        w = w / 2;
       ans*=2;
    }
    
    while (h % 2 == 0)
    {
        h = h / 2;
       ans*=2;
    }
    //cout<<ans<<endl;
    if (ans >= n)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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