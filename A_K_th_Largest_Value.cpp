#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    while (q--)
    {
        ll t;
        cin >> t;
        ll x;
        cin >> x;
        if (t == 1)
        {
            if (v[x - 1] == 0)
            {
                sum++;
            }
            else
            {
                sum--;
            }
            v[x - 1] = 1 - v[x - 1];
            //cout<<sum<<endl;
        }
        else
        {
            if(sum>=x){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
}
int main()
{
    solve();
}