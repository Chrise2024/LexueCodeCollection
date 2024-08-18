#include<stdio.h>  
int main(){
    FILE *fp;
    char a;
    int i;
    fp = fopen("C:\\test.txt","a");
    fputc('*',fp);
    fclose(fp);
    fp = fopen("C:\\test.txt","r");
    for(i = 0;i<32&&!feof(fp);i++){
        fread(&a,1,1,fp);
        if (a != '*'){
            break;
        }
    }
    i--;
    fclose(fp);
    switch(i){
        case 1:
            printf("2023\n");
            break;
        case 2:
            printf("2024\n");
            break;
        case 3:
            printf("2023\n");
            remove("C:\\test.txt");
            break;
    }
    return 0;
}  
