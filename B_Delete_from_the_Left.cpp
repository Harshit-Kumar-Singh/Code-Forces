#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
   string s1;
   cin >> s1;
   string s2;
   cin >> s2;

   ll idx1 =-1;
   ll idx2 =-1;
   if(s2.length()>s1.length()){
       swap(s1,s2);
   }
   //cout<<s1<<" "<<s2<<endl;
   int i = s1.length()-1;
   ll n = s2.length()-1;
   ll count =0;
   for(;i>=0 and n>=0;){
       if(i<0)
       break;
       if(n<0){
           break;
       }
       if(s1[i]!=s2[n]){
           idx1 =i+1;
           idx2 =n+1;
           break;
       }
       i--;
       n--;
      
       
   }
    ll ans1 = i+1;
    ll ans2 = n+1;
    cout<<ans1+ans2<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}