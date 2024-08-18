#include<stdio.h>
int a1=0,a2=0;
int main(){
	char op;
	scanf("%d%c%d",&a1,&op,&a2);
	switch (op){
		case '+':
			printf("%d\n",a1+a2);
			break;
		case '-':
			printf("%d\n",a1-a2);
			break;
		case '*':
			printf("%d\n",a1*a2);
			break;
		case '/':
			printf("%d\n",a1/a2);
			break;
	}
}
