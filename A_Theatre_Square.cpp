#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n, m, a;
    cin >> n >> m >> a;
   unsigned long long ans =ceil((long double)n/a)*ceil(( long double)m/a);
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