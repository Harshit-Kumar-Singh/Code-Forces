#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            count++;
            a--;
        }
        if (s[i] == '1')
        {
            count++;
            b--;
        }
    }
    if (a < 0 or b < 0)
    {
        cout << -1 << endl;
        return;
    }
    if (count == s.length())
    {
        if (isPalindrome(s) and (a == 0 and b == 0))
        {
            cout << s << endl;
            return;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    ll n = s.length();
    ll k;
    if (n % 2 == 0)
        k = n / 2;
    else
        k = (n / 2) + 1;
    for (int i = 0; i < k; i++)
    {
        int idx1 = i;
        int idx2 = n - i - 1;
        if (idx1 == n / 2 and s[idx1] == '?')
        {
            if ((a - 1) >= 0)
            {
                s[idx1] = '0';
                a--;
            }
            else if ((b - 1) >= 0)
            {
                s[idx1] = '1';
                b--;
            }
        }
        else if (s[idx1] == '?' and s[idx2] == '?')
        {
            if ((a - 2) >= 0)
            {
                s[idx1] = s[idx2] = '0';
                a--;
                a--;
            }
            else if ((b - 2) >= 0)
            {
                s[idx1] = s[idx2] = '1';
                b--;
                b--;
            }
        }
        else if (s[idx1] == '0' and s[idx2] == '?')
        {
            if ((a - 1) >= 0)
            {
                s[idx2] = '0';
                a--;
            }
        }
        else if (s[idx2] == '0' and s[idx1] == '?')
        {
            if ((a - 1) >= 0)
            {
                s[idx1] = '0';
                a--;
            }
        }
        else if (s[idx1] == '1' and s[idx2] == '?')
        {
            if ((b - 1) >= 0)
            {
                s[idx2] = '1';
                b--;
            }
        }
        else if (s[idx2] == '1' and s[idx1] == '?')
        {
            if ((b - 1) >= 0)
            {
                s[idx1] = '1';
                b--;
            }
        }
        else if (s[idx1] != s[idx2])
        {
            cout<<-1<<endl;
            return;
        }
    }
    ll count_questionmark = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            count_questionmark++;
        }
    }

    if (a == 0 and b == 0 and (count_questionmark == 0))
        cout << s << endl;
    else
        cout << -1 << endl;
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