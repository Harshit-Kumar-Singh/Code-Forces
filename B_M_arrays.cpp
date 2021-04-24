#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        x = x % k;
        v.push_back(x);
        m[x]++;
    }
    ll final_count = 0;

    for (int i = 0; i < n; i++)
    {
        ll no = v[i];
        ll count = 1;
        if (m[no] <= 0)
            continue;
        if (m[no] > 0)
        { //cout<<no<<" ";

            ll number = k - no;
            if (number == no and m[no] > 1)
            {   
                //cout<<no<<" "<<number<<endl;
                m[n]--;
                continue;
            }
            else
            {
                while (m.find(number) != m.end() and m[number] > 0)
                {
                    //cout << no << " " << number << endl;
                    m[no]--;
                    no = number;
                    number = k - no;
                }
            }
            // cout<<endl;
        }
        final_count++;
    }
    cout << final_count << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}