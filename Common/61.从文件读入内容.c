#include<stdio.h>
int main(){
    char tar[64];
    scanf("%s",&tar);
    char a;
    int i;
    FILE *fp = fopen(tar,"r");
    fread(&a,1,1,fp);
    while (!feof(fp)){
    //for (i = 0;i<2000000&&!feof(fp);i++){
        printf("%c",a);
        fread(&a,1,1,fp);
    }
    fclose(fp);
    return 0;
} 