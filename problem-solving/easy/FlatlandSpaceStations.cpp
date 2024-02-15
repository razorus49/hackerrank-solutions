int flatlandSpaceStations(int n, vector<int> c) {
    int ans=0;
    
    for(int i=0;i<n;++i){
        int distance=INT_MAX;
        for(int j=0;j<c.size();++j){
            distance = min(distance, abs(i-c[j])); //nearest space station for each city
        }
        ans = max(distance, ans); //maximum distance
    }
    return ans;

}
