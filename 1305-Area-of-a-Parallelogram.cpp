# include <iostream>
# include <cstdio>
# include <math.h>
using namespace std;
 
int main(){
 
    int t, ax, ay, bx, by, cx, cy, dx, dy, area;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = ax + cx - bx;
        dy = ay + cy - by;
        area = (ax - cx) * (by - ay);
        area -= (ax - bx) * (cy - ay);
        if(area < 0){
            area *= -1;
        }
        printf("Case %d: %d %d %d\n", i, dx, dy, area);
 
    }
    return 0;
}
