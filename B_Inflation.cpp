#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n ,k;
    cin >> n >> k;
    float sum =0;
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
        sum +=x;
    }
    sum = sum/100.0;
    cout<<v[0]<<" "<<sum<<endl;
    long double ans = (v[0]/(sum));
    cout<<ans<<endl;
    cout<<ceil(ans)<<endl;
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