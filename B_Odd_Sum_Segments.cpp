#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    vector<ll> ans;
    ll sum = 0;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        
        sum += v[i];
        count++;
        if (sum & 1)
        {   
            ans.push_back(i+1);
            count = 0;
            sum = 0;
        }
    }
    if(sum!=0 and sum%2==0){
        ans.pop_back();
    }
    if (ans.size() == k)
    {
        cout << "YES" << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
    return;
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