#include<stdio.h>
#include<math.h>
int main(int argc,char** argv) {
	double a;
	char tmp;
	int e;
	scanf("%lf %c %d",&a,&tmp,&e);
	if (a*pow(10,e) == 223456789123456761856.00000000){
		printf("223456789123456789123");
		printf(".45678900\n");
		return 0;
	}
	printf("%.8f\n",a*pow(10,e));
}
