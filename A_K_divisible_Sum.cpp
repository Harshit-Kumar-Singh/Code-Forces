#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll i=1;
    ll m =k;
    while (k < n)
    {
        k = m*i;
        i++;
       
    }
    
    long double ans = k/(n*1.0);
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