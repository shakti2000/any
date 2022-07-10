class Solution {
public:
    int helper(vector<vector<int>>& grid,int i,int j){
       // cout<<i<<","<<j<<endl;
        if(i>=grid.size()||j>=grid[0].size()||i<0||j<0)return 0;
        if(grid[i][j]==0)return 0;
        grid[i][j]=0;
        int ans=1;
        ans+=helper(grid,i+1,j);ans+=helper(grid,i-1,j);
        ans+=helper(grid,i,j-1);ans+=helper(grid,i,j+1);
        //ans+=helper(grid,i+1,j+1);ans+=helper(grid,i-1,j-1);
       // ans+=helper(grid,i-1,j+1);ans+=helper(grid,i+1,j-1);
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0)continue;
                else{
                    ans=max(ans,helper(grid,i,j));
                }
            }
        }
    return ans;}
};