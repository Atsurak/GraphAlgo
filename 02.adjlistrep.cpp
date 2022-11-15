#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	// n - no of nodes in graph
	// m - no of edges in graph
	// declare the adjacent matrix
	vector<int> adj[n + 1];

	// take edges as input
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	return 0;
}
