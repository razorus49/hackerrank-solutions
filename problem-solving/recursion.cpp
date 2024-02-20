
int recursive_solution(int i, int x, int n){
    int ans=0;
    if(x==0) return 1;

    else if (x>= pow(i,n)){

        ans+= recursive_solution(i+1, x, n);
        ans+= recursive_solution(i+1, x-pow(i,n),n);
        return ans;
    }
    return ans;
}
int powerSum(int X, int N) {
    return recursive_solution(1,X,N);
}
