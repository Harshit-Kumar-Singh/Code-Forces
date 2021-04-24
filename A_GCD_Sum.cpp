#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll gcd(ll a, ll b)
{
    if (!a)
        return b;
    return gcd(b % a, a);
}
ll reduceB(ll a, string b)
{
    ll mod = 0;
    for (int i = 0; i < b.length(); i++)
        mod = (mod * 10 + b[i] - '0') % a;
    return mod;
}

ll gcdLarge(ll a, string b)
{
    ll num = reduceB(a, b);
    return gcd(a, num);
}
void solve()
{
    ll n;
    cin >> n;
    bool check = false;
    while (check == false)
    {
        string b = to_string(n);
        ll a = 0;
        for (int i = 0; i < b.length(); i++)
        {
            a += int(b[i] - '0');
        }
        if (gcdLarge(a, b) > 1)
        {
            cout << b << endl;
            check = true;
        }
        else
        {
            n++;
        }
    }
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