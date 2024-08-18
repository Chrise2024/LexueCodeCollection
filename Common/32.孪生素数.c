#include<stdio.h>
int jud(int);
int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	//printf("%d",jud(17));
	for (i = a;i<b-1;i++){
		if (jud(i)&&jud(i+2)){
			printf("%d,%d\n",i,i+2);
		}
	}
}

int jud(int t){
	int j=0,i;
	for (i = 2;i<t;i++){
		if (t%i==0){
			j++;
		}
	}
	if(j==0)return 1;
	else return 0;
}
