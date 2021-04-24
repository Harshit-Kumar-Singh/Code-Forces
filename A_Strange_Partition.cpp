#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v;
    ll sum = 0;
    ll ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ll ele;
        cin >> ele;
        sum += ele;
        v.push_back(ele);
        if (ele % x == 0)
        {
            ans2 += ele / x;
        }
        else
        {
            ans2 += ele / x + 1;
        }
    }
    ll ans1 = 0;
    if (sum % x == 0)
    {
        ans1 = sum / x;
    }
    else
    {
        ans1 = sum / x + 1;
    }
    cout<<ans1<<" "<<ans2<<endl;
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