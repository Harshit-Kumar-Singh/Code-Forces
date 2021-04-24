#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve()
{
    ll n;
    cin >> n;
    map<char, ll> m;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        char ch = s[0];
        m[ch]++;
    }
    ll final_ans = 0;
    for (auto x : m)
    {
        ll ans1 = 0;
        ll ans2 = 0;
        if (x.second > 1)
        {
            if (x.second % 2 == 0)
            {
                ans1 = x.second / 2;
                ans2 = x.second / 2;
            }
            else
            {
                ans1 = x.second / 2;
                ans2 = (x.second / 2) + 1;
            }
            ans1 = (ans1*(ans1-1))/2;
           
            ans2 = (ans2*(ans2-1))/2;
            cout<<ans1<<" "<<ans2<<endl;
            final_ans+=(ans1+ans2);
        }
    }
    cout<<final_ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}