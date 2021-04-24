#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> v;
    ll min_element = INT_MAX;
    ll max_element = INT_MIN;
    bool check = true;
    for (int i = 0; i < n * m; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if (x % d != 0)
        {
            check = false;
        }
    }

    sort(v.begin(), v.end());
    ll N = v.size();
    if (N % 2 == 0)
    {
        ll idx1 = N / 2;
        ll idx2 = (N / 2) - 1;
        ll sum1 = 0;
        for (int i = 0; i < N; i++)
        {
            ll temp = abs(v[idx1]-v[i]);
            if(temp%d!=0)
            {
                cout<<-1<<endl;
                return;
            }
            sum1 += (abs(v[idx1] - v[i]));
        }
        ll sum2 = 0;
        for (int i = 0; i < N; i++)
        {
            ll temp = abs(v[idx2]-v[i]);
            if(temp%d!=0)
            {
                cout<<-1<<endl;
                return;
            }
            sum2 += (abs(v[idx2] - v[i]));
        }

        cout << min(sum1, sum2) / d << endl;
    }
    else
    {
        ll idx = N / 2;
        ll sum = 0;
        for (int i = 0; i < N; i++)
        {
            ll temp = abs(v[idx]-v[i]);
            if(temp%d!=0)
            {
                cout<<-1<<endl;
                return;
            }
            sum += (abs(v[idx] - v[i]));
        }
        cout << sum / d << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}