//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    void dfs(int i , int j , vector<vector<int>>&matrix , int N , int M ){
        if(i<0 || j<0 || i>=N || j>=M || matrix[i][j]==0)
        return;
        matrix[i][j]=0;
        dfs(i-1,j,matrix,N,M);
        dfs(i+1,j,matrix,N,M);
        dfs(i,j-1,matrix,N,M);
        dfs(i,j+1,matrix,N,M);
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        int ans=0;
             for(int i=0;i<N;i++){
            if(matrix[i][0]==1)
            dfs(i,0,matrix,N,M);
            if(matrix[i][M-1]==1)
            dfs(i,M-1,matrix,N,M);
        }
        for(int i=0;i<M;i++){
            if(matrix[0][i]==1)
            dfs(0,i,matrix,N,M);
            if(matrix[N-1][i]==1)
            dfs(N-1,i,matrix,N,M);
        }
        for(int i=1;i<N-1;i++){
            for(int j=1;j<M-1;j++){
                if(matrix[i][j]==1){
                    dfs(i,j,matrix,N,M);
                    ans++;
                }
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends