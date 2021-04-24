#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll maxSubseq(ll vec[], ll n)
{
    ll suffix = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (vec[i] == 1)
        {
            suffix++;
            vec[i] = suffix;
        }
    }

    ll res = 0;
    ll zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 0)
            zero++;

        if (vec[i] > 0)
            res = max(res, zero + vec[i]);
    }

    return max(res, zero);
}
void solve()
{
    string s;
    cin >> s;
    ll front[s.length()];
    ll rev[s.length()];

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            rev[(s.length() - i) - 1] = 1;
            front[i] = 1;
        }
        else
        {
            front[i] = 0;
            rev[(s.length() - i) - 1] = 0;
        }
    }
    ll len1 = maxSubseq(front, s.length());
    ll len2 = maxSubseq(rev, s.length());

    cout << min(abs(len1 - s.length()), abs(len2 - s.length())) << endl;
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