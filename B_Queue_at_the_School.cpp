#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;){
            if(s[j]=='B' and s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j+=2;
            }
            else{
                j++;
            }
        }
    }
    cout<<s<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
        solve();
    
    return 0;
}