# include <iostream>
# include <cstdio>
using namespace std;
 
int main(){
 
    int T, a, b, c, h, sum;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        h = 0;
        scanf("%d %d %d", &a, &b, &c);
        if(h < a){
            h = a;
            if(h < b){
                h = b;
            }
            if(h < c){
                h = c;
            }
        }
        sum = a * a + b * b + c * c;
        h = h * h;
        h *= 2;
        if(sum == h){
            printf("Case %d: yes\n", i);
        }
        else{
            printf("Case %d: no\n", i);
        }
 
    }
 
    return 0;
}
 
