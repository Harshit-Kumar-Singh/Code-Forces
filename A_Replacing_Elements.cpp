#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lc(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    if (s1[0] != s2[0])
    {
        cout << -1 << endl;
        return;
    }
    if (s1[s1.length() - 1] != s2[s2.length() - 1])
    {
        cout << -1 << endl;
        return;
    }
    if (s1 < s2)
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    else if (s2 < s1)
    {
        for (int i = 0; i < s2.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    ll lcm = lc(s1.length(), s2.length());
    if (lcm == s1.length() and lcm == s2.length())
    {
        cout << s1 << endl;
    }
    if (s1 < s2)
    {
        for (int i = 0; i < lcm; i += s1.length())
        {
            cout << s1;
        }
        cout << endl;
        return;
    }
    else
    {
        for (int i = 0; i < lcm; i += s2.length())
        {
            cout << s2;
        }
        cout << endl;
        return;
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