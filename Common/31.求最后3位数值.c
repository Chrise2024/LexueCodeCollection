#include<stdio.h>
long pow(int,int);
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	long c = pow(a,b);
	if (c==1){
		printf("The last 3 numbers is 1.\n");
		return 0;
	}
	printf("The last 3 numbers is %03d.\n",c);
}

long pow(int m,int n){
	if (n==0){
		return 1;
	}
	int t = m,i;
	long r = 1;
	for (i = 0;i<n;i++){
		r*=t;
		if (r>1000){
			r=r%1000;
		}
	}
	return r;
}
