#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    ll n;
    cin >> n;
    string str ="abcd";
    
    for(int i=0;i<n;i++){
        cout<<str[(i)%str.length()];
    }
    cout<<endl;

}
int main()
{
    
        solve();

    return 0;
}