#include <stdio.h>
 
int main(void)
{
    int l, p, i, k;
 
    scanf("%d", &l);
 
    for(i = 1; i <= l; i++){
        scanf("%d", &p);
 
        if(p % 2 == 0)
            printf("%d %d\n", p/2, p/2);
 
        else{
            k = (p + 1) / 2;
            printf("%d %d\n", k, p-k);
        }
 
    }
 
    return 0;
 
}
