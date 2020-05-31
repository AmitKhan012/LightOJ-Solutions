# include <bits/stdc++.h>
using namespace std;
 
int cost[105][105];
char s[105];
 
int dp(int l, int r){
 
    if(l >= r){
        return 0;
    }
 
    if(cost[l][r] != -1){
        return cost[l][r];
    }
 
    if(s[l] == s[r]){
        cost[l][r] = dp(l + 1, r - 1);
        return cost[l][r];
    }
 
    int a = 1 + dp(l, r - 1);
    int b = 1 + dp(l + 1, r);
    cost[l][r] = min(a, b);
    return cost[l][r];
 
}
 
int main(){
 
    int t, len;
    scanf("%d", &t);
 
    for(int i = 1; i <= t; i++){
        scanf(" %s", s);
        len = strlen(s);
        memset(cost, -1, sizeof(cost));
        printf("Case %d: %d\n", i, dp(0, len - 1));
    }
 
 
    return 0;
}
