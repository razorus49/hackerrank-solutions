#include <bits/stdc++.h>

using namespace std;

//task is to find number of 'a' appearing when a string gets multipled 

long repeatedString(string s, long n) {
    long long k=0;

    //find number of occurences in the string
  
    for(int i=0;i<s.size();++i){
        if(s[i] == 'a') ++k;
    }

    //finding number of strings that wasnt cut off
    long s_occurences = n/s.size();

    long long ans=0;

    //iterating through the remaining bit 
    for(int i=0;i<n-s_occurences*s.size();++i){
        if(s[i%s.size()]=='a') ++ans;
    }

    ans += s_occurences *k;
    
    return ans;
}
