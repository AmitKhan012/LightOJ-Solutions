# include <iostream>
# include <cstdio>
# include <math.h>
using namespace std;
 
int main(){
 
    int t;
    double r, ans, circle;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%lf", &r);
        ans = pow(2 * r, 2);
        circle = 2 * acos(0.0) * pow(r, 2);
        ans -= circle;
        printf("Case %d: %.2lf\n", i, ans);
    }
 
}
