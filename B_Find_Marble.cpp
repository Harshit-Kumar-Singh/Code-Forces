#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,int> visited;
map<int,int> graph;
int search(int node,int depth,int ter){
    if(visited[node]==1){
        return -1;
    }
    else if(node==ter){
        return depth;
    }
    visited[node]=1;
    return search(graph[node],depth+1,ter);
}
void solve()
{
    ll n, s, t;
    cin >> n >> s >> t;
   
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        graph[i]=x;
    }
   
    cout<<search(s,0,t)<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}