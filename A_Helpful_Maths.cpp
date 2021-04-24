#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    cin >> s;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
            str += s[i];
    }
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        if (i != str.length() - 1)
        {
            cout << str[i] << "+";
        }
        else
            cout << str[i] << endl;
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