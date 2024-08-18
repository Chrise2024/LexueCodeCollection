#include<stdio.h>
int adder(int);
int main(){
	int a,i,j;
	scanf("%d",&a);
	for (j=0 ;j<a;j++){
		for (i = 0;i<a;i++){
			printf("%3d",j*a+i+1);
		}
		printf("\n");
}
}

