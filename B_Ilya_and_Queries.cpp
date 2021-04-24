#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    cin >> s;
    ll cum_sum[s.length() + 1];
    for (int i = 0; i < s.length(); i++)
    {
        cum_sum[i] = 0;
    }
    cout << endl;
    ll count = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        cum_sum[i] = count;
       // cout << cum_sum[i] << " ";
    }
    cout << endl;
    ll m;
    cin >> m;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        cout << cum_sum[y - 1] - cum_sum[x - 1] << endl;
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