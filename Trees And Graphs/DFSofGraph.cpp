//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> visited(V, 0);
         
        vector<int> ans;
        
        dfs(0,ans,visited,adj);
        return ans;
    }
    void dfs(int N,vector<int> &ans,vector<int> &visited,vector<int> adj[])
    {
        ans.push_back(N); //Add source node to vector
        
        visited[N]=1;  //Make source as visisted
        
        for(int i:adj[N])
        {
            if(visited[i]!=1)  //If node not visisted
            {
                dfs(i,ans,visited,adj); //Recurisvely push node i in vector
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}