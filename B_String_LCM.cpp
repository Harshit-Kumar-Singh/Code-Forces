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
    ll lcm = lc(s1.length(), s2.length());
    string str1 = "";
    for (int i = 0; i < lcm; i += s1.length())
    {
        str1 += s1;
    }
    string str2 = "";
    for (int i = 0; i < lcm; i += s2.length())
    {
        str2 += s2;
    }
    if (str1 != str2)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
         cout << str1 << endl;
    }
    return;
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