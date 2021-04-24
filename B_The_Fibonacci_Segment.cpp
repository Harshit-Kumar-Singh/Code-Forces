#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{

    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        //cout<<x<<" ";
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 2 << endl;
        return;
    }
    ll count = 2;
    ll max_len = INT_MIN;
    vector<ll> m;
    for (int i = 2; i < n; i++)
    {
        
        ll dif = (v[i]-v[i-1]);
        
        if (dif == v[i - 2])
        {
            count++;
        }
        else
        {
            max_len = max(max_len,count);
            count=2;
        }
    }
   
   
    max_len=max(max_len,count);
    cout<<max_len<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}