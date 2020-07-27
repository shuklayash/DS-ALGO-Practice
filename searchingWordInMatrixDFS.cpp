class Solution {
public:
    /////////////////////////////////////////////////////////////////////
    /////////////////// DFS + BackTracking //////////////////////////////
    /////////////////////////////////////////////////////////////////////
    int R,C;
     bool exist(vector<vector<char>>& board, string word) {
        R=board.size();
        C=board[0].size();
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                bool present =dfs(board,i,j,0,word);
                if(present){
                    return true;
                }
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board,int i, int j,int k,string word){
        if(i>=R || i<0 || j<0 || j>=C || board[i][j]=='*' || word[k]!=board[i][j]){
            return false;
        }
        if(k==word.size()-1){
            return true;
        }
        
        char curr= board[i][j];
        board[i][j]='*';
        bool res=false;
        res=res || dfs(board,i+1,j,k+1,word);
        res=res || dfs(board,i-1,j,k+1,word);
        res=res || dfs(board,i,j+1,k+1,word);
        res=res || dfs(board,i,j-1,k+1,word);
        board[i][j]=curr;
        return res;
        
    }
  
  
};