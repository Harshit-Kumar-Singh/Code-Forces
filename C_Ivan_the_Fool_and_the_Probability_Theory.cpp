#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
   ll n,m;
   cin >> n >> m;
   cout << pow(min(n,m),max(m,n))<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
   
        solve();
    
    return 0;
}