#include<stdio.h>
double ref_h(int,int);
double ref_m(int);
double sub(double,double);
int main() {
	int m,n;
	scanf("%d", &m);
	scanf("%d", &n);
	printf("At %d:%02d the angle is %.1f degrees.",m,n,sub(ref_h(m,n),ref_m(n)));
}

double ref_h(int h,int m){
	if (h==12){
		h=0;
	}
	return h*30.0 + m/2.0;
}

double ref_m(int t){
	return t*6.0;
}

double sub(double a,double b){
	if (a>=b){
		return a-b;
	}
	else{
		return b-a;
	}
}
