#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll x =n/2050;
    if(n%2050!=0){
        cout<<-1<<endl; return;}
    ll sum = 0;
    while(x>0)
    {
        ll r = x%10;
        sum+=r;
        x = x/10;
    }
    cout<<sum<<endl;
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