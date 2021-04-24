#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    vector<ll> v;
    ll max_element = INT_MIN;
    ll idx = -1;
    string str ="abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if (x > max_element)
        {
            max_element = x;
            idx = i;
        }
    }
   // cout<<max_element<<endl;
    //cout<<idx<<endl;
    for (int i = 0; i < k; i++)
    {
        s += str[idx];
    }
    //cout << s << endl;
    ll ans =0;
    for (int i = 0; i < s.length(); i++)
    {
       // cout<<i+1<<"."<<v[int(s[i]-'a')]<<endl;
        ans +=((i+1)*v[int(s[i]-'a')]);
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //ll test;
    //cin >> test;
    //while (test--)
    //{
    solve();
    //}
    return 0;
}