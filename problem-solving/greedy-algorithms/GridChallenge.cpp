string gridChallenge(vector<string>grid){

    for(int i = 0; i < grid.size(); i++) sort(grid[i].begin(), grid[i].end());


    for(int i=0;i<grid.size()-1;++i){
        for(int j=0;j<grid[0].size();++j){
            if(grid[i+1][j] < grid[i][j]){
                return "NO"; //out of order
            }
        }
    }
    return "YES";
}
