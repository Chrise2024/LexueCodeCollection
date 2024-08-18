#include<stdio.h>
int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int m2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int rn(int);
int fn(int, int, int, int);
int toee(int,int,int);
int abs(int);
int main(){
    int y1,m1,d1,y2,m2,d2;
    int ans;
    scanf("%d %d %d",&y1,&m1,&d1);
    scanf("%d %d %d",&y2,&m2,&d2);
    ans = abs(fn(y1, y2,m2,d2) + (toee(y1, m1, d1) - toee(y2, m2, d2)));
    printf("%d days\n",ans);

}
int abs(int t){
    if (t>=0)return t;
    else return t*-1;
}
int rn(int inp){
    if (inp%4!=0||(inp%100==0&&inp%400!=0))return 0;
    return 1;
}

int toee(int a, int b, int c){
    int tm = 0, tEY=0;
    if (rn(a)){
        for (b -= 1; b <= 11; b++)tm += m2[b];
    }
    else{
        for (b -= 1; b <= 11; b++)tm += m1[b];
    }
    tEY = tm - c;
    return tEY;
}
int fn(int y1, int y2, int m2, int d2){
    int small=0, big=0, count, num, td=0;
    if (y1 < y2){
        small = y1;
        big = y2;
    }
    else if (y1 == y2)return 0;
    else{
        small = y2;
        big = y1;
    }
    count = big - small;
    for (num = 1; num <= count; num++)td += 365;
    for (small; small <= big; small++){
        if (rn(small))td++;
    }
    if ( (rn(small)) && ( (m2 < 2) || ((m2 == 2) && (d2 < 29)) ) )td -= 1;
    return td;
}
