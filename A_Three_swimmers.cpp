#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll p;
    cin >> p;
    vector<ll> v;
    for (int i = 0; i < 3; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        // cout<<x<<" ";
    }
    ll min_ans = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        ll x = -1;

                x = (p / v[i]);
            min_ans =min(min_ans,x);
       
           min_ans = min(min_ans,v[i]-p);
        }
       
        
       
    }
   // cout<<endl;
    cout << min_ans << endl;
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