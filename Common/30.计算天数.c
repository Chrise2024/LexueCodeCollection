#include<stdio.h>
int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int m2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int rn(int);
int tosd(int,int,int);
int abs(int);
int main(){
	int y1,m1,d1,y2,m2,d2;
	int ans;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	ans = abs((tosd(y1, m1, d1) - tosd(y2, m2, d2)));
	printf("%d days\n",ans);
	
}
int abs(int t){
	if (t>=0)return t;
	else return t*-1;
}
int rn(int inp){
	if ((inp%4==0&&inp%100!=0)||(inp%100==0&&inp%400==0)) return 1;
	else return 0;
}

int tosd(int y,int m,int d){
	int dd = 0,i,j;
	for (i = 1900;i<y;i++){
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
	return dd+d;
}


