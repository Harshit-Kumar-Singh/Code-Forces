#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isIncreasing(vector<ll> v)
{

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i + 1] <= v[i])
            return false;
    }
    return true;
}
bool allzero(vector<ll> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    ll count0 = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 0)
            count0++;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum < (i * (i +1)) / 2)
        {
            cout << "NO" << endl;
            return;
        }
        
    }
    cout<<"YES";
    cout << endl;
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