#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll x1, y1, z1;
    cin >> x1 >> y1 >> z1;
    ll x2, y2, z2;
    cin >> x2 >> y2 >> z2;
    ll ans1 = 0;
    ans1 += (2*min(z1,y2));
   // cout<<ans1<<endl;
    ll m = min(z1,y2);
    z1 = z1 - m;
    y2 = y2 - m;
  //  cout<<z2<<" "<<z1<<" "<<x1<<endl;
    ll n = z2 - z1 - x1;
    //cout<<n<<endl;
    ll d = 0;
    ll  k = max(d,n);
    //cout<<k<<endl;
    ans1 +=((-2)*k);
    cout<<ans1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}