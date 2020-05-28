#include <cstdio>
#include <iostream>
using namespace std;
 
int main(){
 
    int t;
 
    scanf("%d",&t);
 
    for( int i=1 ; i<=t ; i++){
        int n , x=0;
        scanf("%d",&n);
        int ara[100];
        int total_amount = 0;
 
        for( int j=1 ; j<=n ; j++){
            string str;
 
            cin>>str;
            int amount;
            if(str=="donate"){
                scanf("%d",&amount);
                total_amount+=amount;
            }
            else
                ara[x++]=total_amount;
        }
 
        if(x>0){
            printf("Case %d:\n",i);
            for( int j=0 ; j<x ; j++)
                printf("%d\n",ara[j]);
        }
    }
    return 0;
}
