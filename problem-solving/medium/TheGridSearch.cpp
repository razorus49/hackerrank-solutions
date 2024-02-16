bool check(vector<string> G, vector<string> P, int x, int y){
    for(int i=0;i<P.size();++i){
        for(int j=0;j<P[0].size();++j){
            if(G[i+x][j+y] != P[i][j]){
                return false;
            }
        }
    }
    return true;
}

string gridSearch(vector<string> G, vector<string> P) {

    int R = G.size();
    int C = G[0].size();
    int r = P.size(); 
    int c = P[0].size();
    string s="";

    for(int i=0;i<=R-r;++i){
        for(int j=0;j<=C-c;++j){
            s = G[i].substr(j, c);
            if(s == P[0]){ //only check if it is starting a pattern
                if(check(G, P, i, j)) return "YES";
            }
        }
    }
    return "NO";
}
