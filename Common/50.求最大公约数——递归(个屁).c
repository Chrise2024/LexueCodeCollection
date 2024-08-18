#include<stdio.h>
int min(int,int);
int main() {
	int a,b,c;
	scanf("%d %d",&a,&b);
	for (int i = min(a,b);i>0;i--){
		if (a%i==0&&b%i==0){
			c = i;
			break;
		}
	}
	printf("%d\n",c);
}
int min(int a1,int a2){
	if (a1>=a2)return a2;
	else return a1;
}
