class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
    
        queue<vector<int>> q;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                if(m[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()){
            vector<int> p=q.front();
            for(int i=0;i<m.size();i++){
                m[i][p[1]]=0;
            }
            for(int i=0;i<m[0].size();i++){
                m[p[0]][i]=0;
            }
            q.pop();
        }
    }  
};