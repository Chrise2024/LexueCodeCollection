#include<stdio.h>  
int main() {  
    int m,n,t=0,cont=1,i,j;
    scanf("%d", &m);  
    int w = m*2 - 1;  
    for(i = 1;i<=w;i++){  
        printf("*");  
    }  
    printf("\n");  
    for (i = m-1;i>=1;i--){  
        for (int j = 1;j<=m+i-2;j++){  
            if (j==m-i+1){  
                printf("*");  
            }  
            else{  
                printf(" ");  
            }  
        }  
        printf("*\n");  
    }  
}
