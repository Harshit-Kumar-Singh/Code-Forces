#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    char s[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'P')
            {
                if (i + 1 < n)
                {
                    if (s[i + 1][j] == 'W')
                    {
                        count++;
                        s[i + 1][j] = '.';
                        s[i][j] = '.';
                        continue;
                    }
                }
                if (j + 1 < m)
                {
                    if (s[i][j + 1] == 'W')
                    {
                        count++;
                        s[i][j + 1] = '.';
                        s[i][j] = '.';
                        continue;
                    }
                }
                if (i - 1 >= 0)
                {
                    if (s[i - 1][j] == 'W')
                    {
                        count++;
                        s[i - 1][j] = '.';
                        s[i][j] = '.';
                        continue;
                    }
                }
                if (j - 1 >= 0)
                {
                    if (s[i][j - 1] == 'W')
                    {
                        count++;
                        s[i][j - 1] = '.';
                        s[i][j] = '.';
                        continue;
                    }
                }
            }
        }
    }
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}