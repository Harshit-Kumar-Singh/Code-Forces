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
    }
    ll x, y;
    cin >> x >> y;

    ll min_sum = 0;
    ll idx = -1;

    for (int i = 0; i < n; i++)
    {
        ll sum1 = 0;
        ll sum2 = 0;
        for (int j = 0; j <i; j++)
        {
            sum1 += v[j];
        }
        if (i < n)
        {
            for (int k = i; k < n; k++)
            {
                sum2 += v[k];
            }
        }
        //cout << sum1 << " " << sum2 << endl;
        if (sum1 >x and sum2<=y)
        {
            if(n%2==0)
                cout<<i<<endl;
            else
              cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}