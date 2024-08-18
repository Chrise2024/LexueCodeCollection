#include<stdio.h>
struct Kid {
    int id;
    int bYear;
    int bMonth;
    int bDay;
    char Gend;
    char Name[16];
};
struct Kid Kid_Set[180];
struct Kid _find(struct Kid ref[],int index);
int main(){
    int i,j,k;
    for (i = 0;i<180;i++){
        scanf("%d,%d-%d-%d,%c,%s",&Kid_Set[i].id,&Kid_Set[i].bYear,&Kid_Set[i].bMonth,&Kid_Set[i].bDay,&Kid_Set[i].Gend,&Kid_Set[i].Name);
    }
    //printf("---------------------\n");
    struct Kid temp;
    printf(" BH BirthDayNameSex\n-------------------------\n");
    for (i = 1;i <= 180;i++){
        temp = _find(Kid_Set,i);
        if (!temp.id){
            continue;
        }
        if (temp.bYear < 2013 || temp.bMonth < 9 && temp.bYear==2013 || temp.bMonth == 9 && temp.bYear==2013 && temp.bDay == 1){
            printf("%04d %d-%02d-%02d %-6s %c\n",temp.id,temp.bYear,temp.bMonth,temp.bDay,temp.Name,temp.Gend);
        }
    }
    return 0;
}
struct Kid _find(struct Kid ref[],int index){
    int fi;
    struct Kid Zero;
    Zero.id = 0;
    for (fi = 0;fi<180;fi++){
        if (ref[fi].id == index){
            return ref[fi];
        }
    }
    return Zero;
}