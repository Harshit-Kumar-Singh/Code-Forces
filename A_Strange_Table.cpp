#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
   
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
ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int L;
        cin >> L;
        int R;
        cin >> R;

        long long out_;
        out_ = strange_sum(L, R);
        cout << out_;
        cout << "\n";
    }