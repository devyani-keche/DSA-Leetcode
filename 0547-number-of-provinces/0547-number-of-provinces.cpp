class Solution {
    void bfs(int start, vector<vector<int>>&adj, int n, vector<bool> &visited){
        queue<int> q;
        visited[start]=true;
        q.push(start);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int neighbour:adj[node]){
                if(!visited[neighbour]){
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]) {
                count++;
                bfs(i,adj,n,visited);
            }
        }
        return count;
    }
};