#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll p = pow(2, k) - 1;
    cout << p << endl;
    ll limit = (p - n) - 1;
    ll sum = 0;
    for (int i = p; i >= limit; i--)
    {
        cout << i << " ";
        sum += i;
    }
    
    return;
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