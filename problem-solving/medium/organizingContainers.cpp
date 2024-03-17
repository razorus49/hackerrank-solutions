#include <bits/stdc++.h>

using namespace std;


string organizingContainers(vector<vector<int>> container) {
    vector<int> boxes(100,0);
    vector<int> balls(100,0);
    
    for(int i=0;i<container.size();++i){

        for(int j=0;j<container[0].size();++j){
            boxes[i]+= container[i][j];
            balls[j] += container[i][j];
        }
    }
    sort(boxes.begin(), boxes.end());
    sort(balls.begin(),balls.end());

    //number of balls in container does not change
    //therefore it organisation is possible if container sizes and number of balls for each type
    //is equal
    for(int i=0;i<100;++i){
        if(boxes[i]!=balls[i]) return "Impossible";
    }
    return "Possible";
    
}
