# include <stdio.h>
# include <math.h>
 
int main(void)
{
    int i,T;
 
    float pi, r, area;
 
    scanf("%d", &T);
 
    pi = 2 * acos(0.0);
 
    for(i = 1; i <= T; i++)
    {
        scanf("%f", &r);
 
        area = (4 * r * r) - (pi * r * r);
 
        printf("Case %d:  %.2f", i, area);
    }
 
    return 0;
}
