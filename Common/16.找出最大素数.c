#include<stdio.h>  
int main(){  
    int a,i;
    int res;  
    scanf("%d",&a);  
    for (i = a;i >=0;i--){  
        int t = 0;  
        for (int j = 2;j<i;j++){  
            if (i%j == 0){  
                t++;  
            }  
        }  
        if (t == 0){  
            res = i;  
            break;  
        }  
    }  
    printf("The max prime number is %d.\n",res);  
}  
