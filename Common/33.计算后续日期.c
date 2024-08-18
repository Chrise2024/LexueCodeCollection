#include<stdio.h>
int Isleap(int);

int Isleap(int y){
    return (y%4==0 && y%100!=0 ||y%400==0);
}

int main(){
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m,d;
    int cnt;
    scanf("%d %d %d",&y,&m,&d);
    scanf("%d",&cnt);
    while(cnt!=0){
        int year;
        if(Isleap(y)){
            year=366;month[2]=29;
        }
        else{
            year=365;month[2]=28;
        }
        if(cnt>=year){
            cnt-=year;
            y++;
        }else if(cnt>=month[m]){
            cnt-=month[m];
            m++;
            if(m>12){
                   m-=12;
                y++;
            }
        }else{
            d+=cnt;
            cnt=0;
            if(d>month[m]){
                d-=month[m];
                m++;
                if(m>12){
                    m-=12;
                    y++;
                }
            }
        }
    }
    printf("%d.%d.%d\n",y,m,d);
    return 0;
}
