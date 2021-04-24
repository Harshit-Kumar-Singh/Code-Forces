#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll maxSubseq(ll vec[], ll n) {     
    ll suffix = 0; 
    for (int i = n - 1; i >= 0; i--) 
    { 
        if (vec[i] == 1) 
        { 
            suffix++; 
            vec[i] = suffix; 
        } 
    } 
    
    ll res = 0; 
    ll zero = 0;     
    for (int i = 0; i < n; i++) 
    { 
        if (vec[i] == 0) 
            zero++; 
      
        if (vec[i] > 0) 
            res = max(res, zero + vec[i]); 
    } 
      
    return max(res, zero); 
} 
void solve()
{   
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll arr[n];
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            arr[i] =1;
        }
        else{
            arr[i] =0;
        }
    }
    ll longest = maxSubseq(arr, n) ;
    cout<<abs(longest-n)<<endl;
    

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