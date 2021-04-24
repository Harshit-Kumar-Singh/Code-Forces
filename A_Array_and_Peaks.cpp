#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k > (n / 2) - 1 and n % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }
    else if (k > n / 2 and n & 1)
    {
        cout << -1 << endl;
        return;
    }
    ll m = 1;
    //ll p = n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    ll p = n;
    for (int i = 0; i < n; i++)
    {
        if (i & 1 and k > 0)
        {
            for (int j = n - 1; j >= i; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i] = p;
            k--;
            p--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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