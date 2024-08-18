#include<stdio.h>
//10 12 9 =>18mm 16rmb
int main(){
	int a;
	scanf("%d",&a);
	if ((a*10)%16==0){
		int r = a/1.6;
		printf("%d,%d,%d\n",r*10,r*12,r*9);
	}
	else{
		printf("No change.\n");
	}
}
