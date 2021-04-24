#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{

    ll n;
    cin >> n;
    vector<ll> v;
    ll count1 = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        count1 += x;
        if (x)
        {
            v.push_back(-1);
        }
        else
        {
           v.push_back(+1);
        }
    }
    if(count1==n){
        cout<<n-1<<endl;
        return;
    }
    ll max_sum=0,curr_sum=0;
    for(int i=0;i<n;i++)
	{
		curr_sum=curr_sum+v[i];
		if(curr_sum<0)
		{
			curr_sum=0;
		}
		max_sum=max(max_sum,curr_sum);
	}
    cout<<count1+max_sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}