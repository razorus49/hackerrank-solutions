#include <iostream>
#include  <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int n = c.size();
    int energy=100;
    int encounter=0;
    int i=0;
    while(encounter<2){

        if(i%n==0) ++encounter;
        if(encounter == 2) break;    //check after increment so there will be no additional energy used
      
        if(c[(i+k)%n] == 0)energy -= 1;
        else energy-=3; //thunder cloud
        cout << energy << endl;
        i +=k;
    }
    cout << "encounter" << encounter << endl;
    return energy;
}

int main(){

    freopen("input.in", "r" , stdin);

    int n, k;

    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    jumpingOnClouds(v, k);
    return 0;
}
//20 23 6
