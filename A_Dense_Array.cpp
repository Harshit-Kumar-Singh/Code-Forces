#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll final_ans = 0;
    ll count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll max_ele = max(v[i], v[i + 1]);
        ll min_ele = min(v[i], v[i + 1]);
        float no = ceil((max_ele*1.0) / min_ele);
        //cout<<no<<" ";
        if (no > 2)
        {
            //cout<<max_ele<< " " << min_ele<<endl;
            ll x = min_ele;
            ll m = x;

            for (int i = x; i <= max_ele; i = i * 2)
            {
                
                float k = ((max_ele*1.0)/i);
                if(k>2){
                    count++;
                }
                if(k<=2){
                    break;
                }
               
              
            }
            //cout<<endl;
        }
        else
        {
            continue;
        }
    }
    cout << count<< endl;
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