bool check_possible(vector<int> v){
    int odds=0;
    for(int i=0;i<v.size();++i){
        if(v[i]%2 != 0) ++odds;
    }
    if(odds%2 == 0 ) return true;
    
    return false;
}

bool check_even(vector<int> v){
    for(int i: v){
        if(i%2!=0) return false;
    }
    return true;
}

string fairRations(vector<int> B) {
    if (!check_possible(B)) return "NO";
    
    int ans=0;
    while(!check_even(B)){
        for(int i=0;i<B.size();++i){
            if(B[i]%2!=0){
                if(i==B.size()-1){ //last index --> choose person in front
                    ++B[i];
                    ++B[i-1];
                    ans+= 2;
                }
                else{
                    ++B[i];
                    ++B[i+1];
                    ans+= 2;
                }
            }
        }
    }
    return to_string(ans);
}
