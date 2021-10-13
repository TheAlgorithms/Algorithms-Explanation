#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 1000000

vector<vector<int> > graph(MAXSIZE);
bool vis[MAXSIZE];


void dfs(int start)
{
	stack<int> s;
	cout<<start<<" ";
	vis[start]=true;
	s.push(start);
	while(!s.empty())
	{
		int first=s.top();
		for(int i=0;i<graph[first].size();i++)
		{
			if(!vis[graph[first][i]])
			{
				cout<<graph[first][i]<<" ";
				vis[graph[first][i]]=true;
				s.push(graph[first][i]);
				first=graph[first][i];
				i=-1;
			}
		}
		s.pop();
	}
}
int main()
{

	int n,u,v;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	//to check adjacency list
	// for(int i=1;i<=n;i++)
	// {
	// 	cout<<i<<"-> ";
	// 	for(int j=0;j<graph[i].size();j++)
	// 		cout<<graph[i][j]<<" ";
	// 	cout<<endl;
	// }

	//dfs code
	dfs(1);
	return 0;
}
