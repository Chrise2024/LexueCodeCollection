#include<stdio.h>
int main() {
	int m,i;
	double n = 0;
	scanf("%d", &m);
	for (i = 1;i<=m;i++){
		n = n + (1.0/i);
		//printf("%f\n",n);
	}
	printf("sum=%.6f\n",n);
}
