#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    string first[m];
    string second[m];
    for (int i = 0; i < m; i++)
    {
        cin >> first[i] >> second[i];
        //cout << first[i] << " " << second[i] << endl;
    }
    string main[n];
    for (int i = 0; i < n; i++)
    {
        cin >> main[i];
        for (int j = 0; j < m; j++)
        {
            if ((main[i] == first[j]) or (main[i] == second[j]))
            {
                if(first[j].length()==second[j].length()){
                    main[i]=first[j];
                }
                else if(first[j].length()<second[j].length()){
                    main[i]=first[j];
                }
                else{
                    main[i] = second[j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<main[i]<<" ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll test;
    //cin >> test;
    //while (test--)
    //  {
    solve();
    //}
    return 0;
}