#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1 || x == 3)
        {
            count++;
        }
    }
    cout << count << endl;
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