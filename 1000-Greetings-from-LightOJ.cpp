# include <stdio.h>
 
int main(void)
{
    int T, c, a, b;
 
    scanf("%d", &T);
 
    for(c = 1; c <= T; c++){
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", c, a+b);
    }
 
    return 0;
 
 
}
