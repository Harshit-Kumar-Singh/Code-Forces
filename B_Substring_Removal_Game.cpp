#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    cin >> s;
    //cout << s << endl;
    vector<ll> v;
    //ll count = 0;
    ll idx = -1;
    // v.push_back(0);
    for (int i = 0; i < s.length();)
    {
        if (s[i] == '1')
        {
            ll count = 0;
            while (s[i] != '0' and i < s.length())
            {
                count++;
                i++;
            }
            v.push_back(count);
        }
        else
        {
            i++;
        }
    }
    sort(v.begin(), v.end());
    ll final_ans =0;
    for (int i = v.size() - 1; i >= 0; i-=2)
    {
        final_ans = final_ans + v[i];
    }
    cout<<final_ans<<endl;
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