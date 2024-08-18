#include<stdio.h>
int main(){
	int a,i;
	int tmp = 1;
	scanf("%d",&a);
	for (i = 1;i <=a;i++){
		tmp = (tmp+a-i)*2;
	}
	//int res = (5*tmp)-4;
	if (tmp/2==1){
		printf("The monkey got 1 peach in first day.\n");
	}
	else{
		printf("The monkey got %d peaches in first day.\n",tmp/2);
	}
}
