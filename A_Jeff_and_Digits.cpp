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
        if (x == 5)
            count++;
    }
    if (count == n)
    {
        cout << -1 << endl;
        return;
    }
    if (count < 9)
    {
        cout << 0 << endl;
        return;
    }
    if (count >= 9)
    {

        ll x = count / 9;

        for (int i = 1; i <= 9 * x; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < n - count; i++)
        {
            cout << 0;
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}