#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll even = 0;
    ll odd = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if ((i+1) % 2 == 0)
        {
            even+=x;
        }
        else
        {
            odd+=x;
        }
    }
    if (even<odd)
    {
        for (int i = 1; i < v.size(); i+=2)
        {
            v[i]=1;
        }
    }
    else
    {
        for (int i = 0; i < v.size(); i+=2)
        {
            v[i]=1;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout << endl;
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