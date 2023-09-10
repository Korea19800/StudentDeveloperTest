// option2 4 problems 
#include<bits/stdc++.h>
using namespace std;
// 1 
string reverse(string s){
    string ans = "";
    for(int i = s.size()-1; i >= 0; i--){
        ans.push_back(s[i]);
    }
    return ans;
}
// 2
int largest(int a, int b, int c){
    // you could simply write the below code
    // return max({a,b,c}); 
    int big = a > b ? a : b;
    big = big > c ? big : c;
    return big;
}
// 3 
int factorial(int n){
    if( n == 1) return 1;
    return n * factorial(n-1);
}
//4
int fibonacci(int n){
    vector<int> dp(n+1);
    dp[1] = 1, dp[2] = 1;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
