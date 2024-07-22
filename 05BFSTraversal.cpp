/*
LECT 04:-
   for traversal maintain a visited array[11]={0}
   for (i -> 1 to 10 )
    if(!vis[i]) traversal(i)   //done for disconnected components

LECT 05:-
    BFS- Breadth first search (levelwise)
    Initial starting node will be given
    Queue should contain that starting node and a visited array
    Space complexity O(3N) = O(N) - queue+vis+adj
    Time complexity O(N) {for loop} + O(2E) {Sum of degrees}
*/

#include <bits/stdc++.h>
#define For(i,n) for(int i=0;i<(n);++i)
#define rep(i,a,n) for(int i=a;i<=(n);++i)
using namespace std;

vector<int> bfs(int n,vector<int> adj[]){
	int vis[n+1]={0};
	vis[1]=1; //mark starting node as visited
	queue<int> q;
	q.push(1);
	vector<int> bfs;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		bfs.push_back(node);

		for(auto it : adj[node])
			if(!vis[it]){
				vis[it]=1;
				q.push(it);
			}
	}
	return bfs;

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

    vector<int> ans=bfs(n,adj);
    printAns(ans);

	return 0;
}





/*
::::::: SAMPLE INPUT :::::::

9 9
1 2
1 6
2 3
2 4
6 7
6 9
4 5
5 8
7 8

::::::: SAMPLE OUTPUT :::::::

1 2 6 3 4 7 9 5 8 

*/