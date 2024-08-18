#include<stdio.h>
int main() {
    int a[10] = {0};
    char k,i = getchar();
    for (;i != '\n';){
        a[i - '0']++;
        i = getchar();
    }
    for (k = 9;k>=0;k--){
        while(a[k]--){
            printf("%c",k + '0');
        }
    }
    printf("\n");
}