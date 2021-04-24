#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    
    ll n,a,b;
    cin >> n >> a >> b;
    n = n-a;
    while(n-b>1){
        n--;
    }
    cout<<n<<endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}