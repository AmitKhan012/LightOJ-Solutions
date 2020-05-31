# include <bits/stdc++.h>
using namespace std;
 
int cost[202][102];
int banana[202][102];
 
int dp(int r, int c, int n){
 
    if(r > 2 * n - 2 || c < 0){
        return 0;
    }
 
    if(r >= n && c == 2 * n - 1- r){
        return 0;
    }
 
    if(cost[r][c] != -1){
        return cost[r][c];
    }
 
    if(r < n - 1){
        cost[r][c] = banana[r][c] + max(dp(r + 1, c, n), dp(r + 1, c + 1, n));
        return cost[r][c];
    }
    else{
        cost[r][c] = banana[r][c] + max(dp(r + 1, c - 1, n), dp(r + 1, c, n));
        return cost[r][c];
    }
}
 
int main(){
 
    int t, n, ans;
    scanf("%d", &t);
 
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        for(int j = 0; j < 2 * n - 1; j++){
            if(j < n){
                for(int k = 0; k <= j; k++){
                    scanf("%d", &banana[j][k]);
                }
            }
            else{
                for(int k = 0; k < 2 * n - 1 - j; k++){
                    scanf("%d", &banana[j][k]);
                }
            }
        }
        memset(cost, -1, sizeof(cost));
        ans = dp(0, 0, n);
        printf("Case %d: %d\n", i, ans);
    }
 
 
    return 0;
}
