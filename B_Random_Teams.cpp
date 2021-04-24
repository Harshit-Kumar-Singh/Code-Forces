#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    
    ll n,m;
    cin>> n>>m;
    if(m==1){
        cout<<n*2<<" "<<n*2<<endl;
        return;
    }

    
    ll k = n -(m-1);
    ll max_pair = k*(k-1)/2;
    cout<<max_pair<<endl;

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