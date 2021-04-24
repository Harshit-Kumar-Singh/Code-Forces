#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin >> n;
    ll sum1 = 0;
    ll sum2 =0;
    ll sum3 =0;
    ll arr[n][3];
    for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
           // cout<<arr[i][j]<<" ";
        }
        //cout<<endl;
    }
    for(int i=0;i<n;i++){
        sum1+=arr[i][0];
        sum2+=arr[i][1];
        sum3+=arr[i][2];
    }
    //cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    if (sum1==0 and sum2==0 and sum3==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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