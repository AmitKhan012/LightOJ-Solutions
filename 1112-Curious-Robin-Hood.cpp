# include <iostream>
# include <cstdio>
using namespace std;
 
int a[100005];
int tree[400020];
int I, J, sum, type, v;
 
 
void build(int node, int l, int r){
    if(l == r){
        tree[node] = a[l];
        return;
    }
    int left_node = node * 2;
    int right_node = node * 2 + 1;
    int mid = (l + r) / 2;
    build(left_node, l, mid);
    build(right_node, mid+1, r);
    tree[node] = tree[left_node] + tree[right_node];
}
 
void que(int node, int l, int r){
    if(r < I || J < l){
        return;
    }
    if(I <= l && r <= J){
        sum += tree[node];
        return;
    }
    int left_node = node * 2;
    int right_node = node * 2 + 1;
    int mid = (l + r) / 2;
    que(left_node, l, mid);
    que(right_node, mid+1, r);
}
 
void update(int node, int l, int r){
    if(type == 1){
        if(r < I || I < l){
            return;
        }
        if(I >= l && I <= r){
            tree[node] -= a[I];
            if(l != r){
                int left_node = node * 2;
                int right_node = node * 2 + 1;
                int mid = (l + r) / 2;
                update(left_node, l, mid);
                update(right_node, mid+1, r);
            }
            return;
        }
    }
    else{
        if(r < I || I < l){
            return;
        }
        if(I >= l && I <= r){
            tree[node] += v;
            if(l != r){
                int left_node = node * 2;
                int right_node = node * 2 + 1;
                int mid = (l + r) / 2;
                update(left_node, l, mid);
                update(right_node, mid+1, r);
            }
            return;
        }
    }
}
 
int main(){
 
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        int N, q;
        scanf("%d %d", &N, &q);
        for(int j = 1; j <= N; j++){
            scanf("%d", &a[j]);
        }
        build(1, 1, N);
        printf("Case %d:\n", i);
        for(int j = 1; j <= q; j++){
            scanf("%d", &type);
            if(type == 1){
                scanf("%d", &I);
                printf("%d\n", a[I+1]);
                I++;
                update(1, 1, N);
                a[I] = 0;
            }
            else if(type == 2){
                scanf("%d %d", &I, &v);
                I++;
                update(1, 1, N);
                a[I] += v;
            }
            else{
                scanf("%d %d", &I, &J);
                I++;
                J++;
                sum = 0;
                que(1, 1, N);
                printf("%d\n", sum);
            }
 
        }
 
    }
 
}
