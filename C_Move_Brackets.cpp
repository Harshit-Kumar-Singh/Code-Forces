#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count = 0;
    ll ans = 0;
    ll prev_count =0;
    for (int i = 0; i < n; i++)
    {

        if (s[i] == ')')
        {
            count--;
            
        }
        if (s[i] == '(')
        {
            count++;
        }
        if(count<0 and count<prev_count)
        {
            ans++;
            prev_count = count;
        }
        
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
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