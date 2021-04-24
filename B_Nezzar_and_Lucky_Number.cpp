#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> v;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (auto x : v)
    {
        bool check = false;
        ll i = 0;
        while (x>=d)
        {
            check = false;
            string s = to_string(x);
            //<<s<<endl;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == char(d + '0'))
                {
                    check = true;
                    break;
                }
            }
            if (check == true)
            {
                break;
            }
           

            x = x - d;
            
        }
        if (check == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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