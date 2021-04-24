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
    bool check = true;
    ll idx =-1;
    while (k > 0)
    {
        for (int j = 0; j < n ; j++)
        {
            if (j == n - 1)
            {
                cout << -1 << endl;
                return;
            }
            if (v[j] < v[j + 1])
            {
                v[j]++;
                k--;
                idx =j;
                break;
            }
        }
    }

    cout<<idx+1<<endl;
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