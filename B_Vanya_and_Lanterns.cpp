#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, len;
    cin >> n >> len;
    vector<double> v;   
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll idx = 0;
    double max_dif = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        double no = (v[i + 1] - v[i]) / 2.0;
        max_dif = max(max_dif, no);
        //cout<<max_dif<<endl;
    }
    if ((v[0] != 0))
    {
        max_dif = max(max_dif, v[0] - 0);
    }
    if (v[n - 1] != len)
    {
        max_dif = max(max_dif, len - v[n - 1]);
    }
    printf("%.10f", max_dif);

    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll test;
    //cin >> test;
    //while (test--)
    //{
    solve();
    //}
    return 0;
}