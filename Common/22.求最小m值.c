#include<stdio.h>
int adder(int);
int main(){
	int a,j;
	scanf("%d",&a);
	for (j = 1;j<=a;j++){
		if (adder(j)>=a){
			printf("%d\n",j);
			break;
		}
	}
}

int adder(int n){
	int tmp = 0,i;
	for (i = 1;i<=n;i++){
		tmp += i;
	}
	return tmp;
}
