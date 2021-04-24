#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    char ch [n][n];
    ll x1,y1,x2,y2;
    ll times = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ch[i][j];
            if(ch[i][j]=='*' and times == 1){
                x1 = i;
                y1 = j;
                times++;
            }
            if(ch[i][j]=='*' and times == 2){
                x2 = i;
                y2 = j;
            }
            
        }
        
    }
    ll ansx1,ansx2,ansy1,ansy2;
    if(x1!=x2 and y1!=y2){
        ansx1 = x1;
        ansy1 = y2;
        ansx2 = x2;
        ansy2 = y1;
    }

    else if(y1==y2 and x1!=x2 ){
        if(y1+1<n){
            ansy1 = ansy2 = y1+1;
            ansx1 = x1 ;
            ansx2 = x2;
        }
        else{
            ansy1 = ansy2 = y1-1;
            ansx1 = x1 ;
            ansx2 = x2;
        }
    }
    else{
         if(x1+1<n){
            ansy1 = y1;
            ansy2 = y2;
            ansx1 = ansx2 = x2+1;
        }
        else{
           ansy1 = y1;
            ansy2 = y2;
            ansx1 = ansx2 = x2-1;
        }

    }
   
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if(i==ansx1 and j==ansy1){
                cout<<"*";
            }
            else if(i==ansx2 and j==ansy2){
                cout<<"*";
            }
            else{
                cout<<ch[i][j];
            }
        
            
        }
        cout<<endl;
        
    }
   // cout<<endl;
    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}