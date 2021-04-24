#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check_prime(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool check_TPrime(ll n){
    if(n==1){
        return false;
    }
    
    long double sr = sqrt(n);
    long double f = floor(sr);
    if((sr-f)==0){
        if(check_prime(ll(sr))){
            return true;
        }
    }
    return false;

}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(check_TPrime(v[i])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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