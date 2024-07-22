#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<(n);++i)
#define rep(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
/*
    n-> no. of nodes/vertices
    m -> no. of edges
    Next m-lines will contain edges
    Represent it in an adjacency matrix [nxn]
*/
int main()
{
    int n,m,u,v;
    cin>>n>>m;
    int adj[n+1][n+1]={0};
    For(i,m)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
        //If directed only one of above 2
        //If weighted adj[u][v]=wt
    }
    rep(i,1,n)
    {
        rep(j,1,n)
        cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    

	return 0;
}



/*SAMPLE INPUT
5 6
1 2
1 3
3 4
2 4
2 5
4 5
*/