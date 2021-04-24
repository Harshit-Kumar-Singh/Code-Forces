#include<stdio.h> 
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
void solve()
{    
    ll n;
    ll m;
    cin >> n >> m;
    if(m%n!=0){
        cout<<-1<<endl;
        return;
    }
    ll ans = m/n;
    ll count=0;
    while(ans>1){
        if(ans%3==0){
            ans = ans/3;
            count++;
        }
        if(ans%2==0){
            ans = ans/2;
            count++;
        }
        else{
            cout<<-1<<endl;
            return;
        }
        
    }
    // if(ans!=1){
    //     cout<<-1<<endl;
    //     return;
    // }
    cout<<count<<endl;
}
int main() 
{ 
    solve();
    return 0; 
} 