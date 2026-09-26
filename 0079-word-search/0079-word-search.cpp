class Solution {
public:
    bool find(vector<vector<char>>& board,string word,int i,int l,int r,vector<vector<bool>>&vis){
        if(i==word.size()){
            return true;
        }
        if(l<0 || l>=board.size() || r<0 ||r>=board[0].size()){
            return false;
        }
        if(board[l][r]!=word[i] || vis[l][r]){
            return false;}
        vis[l][r]=true;    
        bool m=find(board,word,i+1,l+1,r,vis);
        bool n=find(board,word,i+1,l-1,r,vis);
        bool o=find(board,word,i+1,l,r+1,vis);
        bool p=find(board,word,i+1,l,r-1,vis);
        if(m || n || o || p){
                return true;
            }

        vis[l][r]=false;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
       int m=board.size();
        int n=board[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(word[0]==board[i][j]){
                    if(find(board,word,0,i,j,vis)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};