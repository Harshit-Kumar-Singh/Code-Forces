#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 100000;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll count_odd = 0;
    ll count_even = 0;
    for (int i = 0; i < n; i++)
    {
        ll no;
        cin >> no;
        if (no & 1)
        {
            if (count_odd >= x)
                continue;
            count_odd++;
        }
        else
        {
            count_even++;
        }
    }
  
    if (count_odd % 2 == 0)
    {
        count_odd -= 1;
    }
    //cout << count_odd << " " << count_even << endl;
    if (count_odd + count_even >= x and count_odd>0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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