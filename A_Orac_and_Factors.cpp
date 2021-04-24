#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void solve(){
    ll n,k;
    cin >> n >> k;
    ll temp =-1;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            temp=i;
            break;
        }
    }
   // cout<<n<<endl;
    if(n&1)
    {
        n = n+temp;
        k--;
    }
    cout<<(n+k*2)<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test;
    cin >> test;
    while(test--)
        solve();
    
    return 0;
}