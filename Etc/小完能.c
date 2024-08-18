#include<stdio.h>
#include<stdlib.h>
int jud(int set[],int ref[],int p,int size,int r);
int main(){
    int i,j,k,k1;
    int n,m;
    scanf("%d %d",&n,&m);
    int* lst = (int*)malloc(4*n);
    int* types = (int*)malloc(4*m);
    for (i = 0;i<m;i++){types[i] = 1;}
    for (i = 0;i<n;i++){
        scanf("%d",&lst[i]);
        lst[i]--;
    }
    k = jud(lst,types,0,n,m);
    for (j = 1;j<n-m;j++){
        for (i = 0;i<m;i++){types[i] = 1;}
        k1 = jud(lst,types,j,n,m);
        if (!k1){
            break;
        }
        if (k1<k){
            k = k1;
        }
        
    }
    free(lst);
    free(types);
    printf("%d\n",k);
}
int jud(int set[],int ref[],int p,int size,int r){
    int ji;
    for (ji = p;ji<size;ji++){
        if (ref[set[ji]] != -1){
            ref[set[ji]] = -1;
            r--;
        }
        if (!r){
            return ji -p+1;
            break;
        }
    }
    return 0;
}
