#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    ll n;
    cin >> n;
    ll r = n%2020;
    ll q = n/2020;
    if(r<=q) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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