# include <bits/stdc++.h>
using namespace std;
 
struct house{
    int r, g, b;
};
 
vector <house> v;
int cost[22][4];
 
int dp(int h, int c, int n){
    if(h == n) return 0;
    if(cost[h][c] != -1) return cost[h][c];
    if(c == 0){
        cost[h][c] = v[h].r + min(dp(h+1, 1, n), dp(h+1, 2, n));
        return cost[h][c];
    }
    else if(c == 1){
        cost[h][c] = v[h].g + min(dp(h+1, 0, n), dp(h+1, 2, n));
        return cost[h][c];
    }
    else if(c == 2){
        cost[h][c] = v[h].b + min(dp(h+1, 0, n), dp(h+1, 1, n));
        return cost[h][c];
    }
}
 
int main(){
 
    int t, n, ans;
    house H;
    scanf("%d", &t);
 
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        v.clear();
        for(int j = 0; j < n; j++){
            scanf("%d %d %d", &H.r, &H.g, &H.b);
            v.push_back(H);
        }
        memset(cost, -1, sizeof(cost));
        ans = dp(0, 0, n);
        ans = min(ans, dp(0, 1, n));
        ans = min(ans, dp(0, 2, n));
        printf("Case %d: %d\n", i, ans);
    }
 
}
