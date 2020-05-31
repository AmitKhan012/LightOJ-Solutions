# include <iostream>
# include <stdio.h>
# include <math.h>
using namespace std;
 
int main()
{
 
    int t;
    double v1, v2, v3, a1, a2, t1, t2, time, d, bird;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        t1 = v1 / a1;
        t2 = v2 / a2;
        time = max(t1, t2);
        bird = v3 * time;
        d = (v1 / 2) * t1;
        d += (v2 / 2) * t2;
        printf("Case %d: %.6lf %.6lf\n", i, d, bird);
    }
 
}
