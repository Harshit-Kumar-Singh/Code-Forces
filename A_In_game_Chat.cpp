#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int idx = -1;
    int count_1 = 0, count_2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] != ')')
        {
            idx = i;
            break;
        }
        else
        {
            count_1++;
        }
    }
    count_2 = n - count_1;
    if (count_1 > count_2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}