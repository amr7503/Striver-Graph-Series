#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<(n);++i)
#define rep(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
/*
    Array of vectors/list
    Space complexity - O(2*E)
*/
int main()
{
    int n,m,u,v;
    cin>>n>>m;
    
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        //For weighted store in pair<int,int>

    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<adj[i].size();j++)
            cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    

	return 0;
}
