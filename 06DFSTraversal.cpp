#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<(n);++i)
#define rep(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;
// DFS is achieved through Recursion

void dfs(int node,vector<int> adj[],int vis[],vector<int> &ans)
{
	
	vis[node]=1;
	ans.push_back(node);
	//now traverse all it's neighbours
	for(auto it : adj[node])
	{
		if(!vis[it]){
			dfs(it,adj,vis,ans);
		}
	}

}
void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

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

    }
    int vis[n+1]={0};
    int start=1;
    vector<int> ans;
    dfs(start,adj,vis,ans);
    printAns(ans);

	return 0;
}


/*
INPUT 
8 8
1 2
1 3
2 5
2 6
3 4
3 7
4 8
7 8

AdjList
1 -> 2 3 
2 -> 1 5 6 
3 -> 1 4 7 
4 -> 3 8 
5 -> 2 
6 -> 2 
7 -> 3 8 
8 -> 4 7 

Output
1 2 5 6 3 4 8 7 
*/