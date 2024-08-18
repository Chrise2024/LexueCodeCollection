#include<stdio.h>
int rn(int);
int trans(int,int);
int tosd(int,int,int);
int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int m2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
//2017-1-1  sun
int main(){
	int iyear,imonth,iday,iweek,ds;
	scanf("%d-%d-%d",&iyear,&imonth,&iday);
	scanf("%d",&iweek);
	//ds = (1+iweek)%7;
	if(iyear<2017){
		printf("[2017-01-01~%d-%02d-%02d,%d]\nERROR!",iyear,imonth,iday,iweek);
		return 0;
	}
	printf("[2017-01-01~%d-%02d-%02d,%d]\n",iyear,imonth,iday,iweek);
	int dd = tosd(iyear,imonth,iday);
	int c = 1,i;
	for (i = iweek;i<=dd;i+=7){
		trans(i,c);
		c++;
	}
	if (c==1){
		printf("NO DATE FOUND!\n");
	}
}

int rn(int y){
    return (y%4==0 && y%100!=0 ||y%400==0);
}

int trans(int delta,int count){
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y = 2017,m = 1,d = 1;
    while(delta!=0){
        int year;
        //printf("%d\n",y);
        if(rn(y)){
            year=366;month[2]=29;
        }
        else{
            year=365;month[2]=28;
        }
        if(delta>=year){
            delta-=year;
            y++;
        }else if(delta>=month[m]){
            delta-=month[m];
            m++;
            if(m>12){
                m-=12;
                y++;
            }
        }else{
            d+=delta;
            delta=0;
            if(d>month[m]){
                d-=month[m];
                m++;
                if(m>12){
                    m-=12;
                    y++;
                }
            }
            //printf("%d\n",y);
            //printf("%03d %04d-%02d-%02d\n",count,y,m,d);
        }
    }
    printf("%03d %04d-%02d-%02d\n",count,y,m,d);
    return 1;
}

int tosd(int y,int m,int d){
	int dd = 0,i,j;
	for (i = 2017;i<y;i++){
		if (rn(i))dd+=366;
		else dd+=365;
	}
	if (rn(y)){
		for (j = 0;j<m-1;j++){
			dd+=m2[j];
		}
	}
	else{
		for (j = 0;j<m-1;j++){
			dd+=m1[j];
		}
	}
	return dd+d-1;
}
