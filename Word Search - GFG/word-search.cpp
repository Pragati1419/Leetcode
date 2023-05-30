//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool check(int l , int r, int n , int m){
    if(l<0 || r<0 || l>=n || r>=m)
    return false;
    return true;
}

  bool dfs(vector<vector<char>>& board,vector<vector<int>> &vis,string &word,int i,int j,int n,int m,int curr){
        if(curr==word.size()-1){
            if(word[curr]==board[i][j]) return true;
            else return false;
        }
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        for(int k = 0;k<4;k++){
            if(check(i+dx[k],j+dy[k],n,m) and vis[i+dx[k]][j+dy[k]]==0 and word[curr+1] == board[i+dx[k]][j+dy[k]]){
                vis[i+dx[k]][j+dy[k]] = 1;
                if(dfs(board,vis,word,i+dx[k],j+dy[k],n,m,curr+1)) return true;
                vis[i+dx[k]][j+dy[k]] = 0;
            }
        }
        return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
             int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j]==word[0]){
                    vis[i][j] = 1;
                    if(dfs(board,vis,word,i,j,n,m,0)) return true;
                    vis[i][j] = 0;
                }
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends