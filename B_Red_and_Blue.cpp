#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        //cout<<x<<" ";
    }
    // cout<<endl;
    ll m;
    cin >> m;
    vector<ll> b;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        b.push_back(x);
        //cout<<x<<" ";
    }

    ll cum_sum1[n];
    ll cum_sum2[m];
    for (int i = 0; i < n; i++)
    {

        cum_sum1[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {

        cum_sum2[i] = 0;
    }
    cum_sum1[0] = a[0];
    cum_sum2[0] = b[0];
    ll max1 = a[0];
    ll max2 = b[0];
    for (int i = 1; i < n; i++)
    {
        cum_sum1[i] = a[i] + cum_sum1[i - 1];
        max1 = max(max1,cum_sum1[i]);

    }
    for (int i = 1; i < m; i++)
    {
        cum_sum2[i] = b[i] + cum_sum2[i - 1];
        max2= max(max2,cum_sum2[i]);
    }
    if(max1<0){
        max1 =0;
    }
    if(max2<0){
        max2 =0;
    }
    cout<<max1+max2<<endl;
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