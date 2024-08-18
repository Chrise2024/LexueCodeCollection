#include<stdio.h>
int main() {
	int m,i;
	double n = 1;
	scanf("%d", &m);
	if (m==1){
		printf("1\n");
		return 0;
	}
	int step = 1;
	for (i = 2;i<=m;i++){
		n = n + (1.0/i)*step;
		step *= -1;
		//printf("%f\n",n);
	}
	if (n==1) printf("1\n");
	else printf("%.6f\n",n);
}
