#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{   
    ll arr[5][5];
    ll idxi=-1;
    ll idxj =-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            //cout<<arr[i][j]<<" ";
            if(arr[i][j]==1){
                idxi = i+1;
                idxj = j+1;
            }
        }
        //cout<<endl;
    }
    cout<<abs(3-idxi)+abs(3-idxj)<<endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
        solve();
  
    return 0;
}