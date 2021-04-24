#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n,k1,k2;
    cin >> n >> k1 >> k2;
    ll w,b;
    cin >> w >> b;
    ll white = (k1+k2);
    white = white/2;
    ll black = abs((k1+k2)-(2*n));
    black = black/2;
    //cout<<white<<" "<<black<<endl;
    if(white>=w and black>=b){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}