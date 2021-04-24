#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isNotPalindrome(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    string s;
    cin >> s;
    string ans = s + 'a';
    if (isNotPalindrome(ans))
    {
        cout << "YES" << endl;
        cout << ans << endl;
        return;
    }
    ans = 'a' + s;
    if (isNotPalindrome(ans))
    {
        cout << "YES" << endl;
        cout << ans << endl;
        return;
    }
    cout << "NO" << endl;
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