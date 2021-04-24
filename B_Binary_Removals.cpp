#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
   string s;
   cin >> s;
   for(int i=0;i<s.length()-1;i++){
       if(s[i]=='1' and s[i+1]=='1'){
           ll count=0;
           for(int j=i+1;j<s.length();j++){
               if(j+1<s.length()){
                    if(s[j]=='0' and s[j+1]=='0'){
                        cout<<"NO"<<endl;
                        return;
                    }
               }
               //cout<<s[j]<<" "<<count<<endl;
           }
           //cout<<count<<endl;
       }
   }
   cout<<"YES"<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}