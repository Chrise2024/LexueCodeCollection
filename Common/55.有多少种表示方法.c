#include<stdio.h>
int div(int,int);
int main(){
	int a,lim;
	scanf("%d %d",&a,&lim);
	int sol = div(a,lim);
	printf("%d\n",sol);
}

int div(int inp,int max){
	if (inp==0||max==0){
		return 0;
	}
	else if (max==1||inp==1){
		return 1;
	}
	else if (inp == max){
		return 1+div(inp,max-1);
	}
	else if (inp>max){
		return div(inp-max,max)+div(inp,max-1);
	}
	else{
		return (inp,inp);
	}
}

