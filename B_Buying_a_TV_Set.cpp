#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
   ll a,b,x,y;
   cin >> a >> b >> x >> y;
    ll d; 
    d = __gcd(x, y); 
    x = x / d; 
    y = y / d; 
    ll w = ((a)/x);
    ll h = ((b)/y);
    cout<<min(w,h)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}