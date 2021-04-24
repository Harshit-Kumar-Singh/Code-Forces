#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    ll x,y,n;
    cin >> x >> y >> n;
    ll rem = n%x;
    if(rem==y){
        cout<<n<<endl;
    }
    else if(rem>y){
        ll dif  = abs(rem-y);
        n =  n-dif;
        cout<<n<<endl;
    }
    else{
        n =  n-rem;
        n = n - abs(x-y);
        cout<<n<<endl;
    }

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