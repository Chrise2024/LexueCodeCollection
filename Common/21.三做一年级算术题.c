#include<stdio.h>
char io[64];
char op;
int max=0,min=1145,tmp1,tmp2;
int main(){
	int i;
	scanf("%s",&io);
	//printf("%s",io);
	for (i = 0;i<64;i++){
		if (io[i]=='+'||io[i]=='-'||io[i]=='*'||io[i]=='/'||io[i]=='%'){
			op = io[i];
		}
		if(io[i]>=48&&io[i]<=57){
			if (io[i]-48>max){
			max = io[i]-48;
			}
			if (io[i]-48<min){
			min = io[i]-48;
			}
		}
    }
    //printf("%d %d",max,min);
    switch (op){
		case '+':
			printf("%d%c%d=%d\n",max,op,min,max+min);
			break;
		case '-':
			printf("%d%c%d=%d\n",max,op,min,max-min);
			break;
		case '*':
			printf("%d%c%d=%d\n",max,op,min,max*min);
			break;
		case '/':
			if (min==0){
				printf("Error!\n");
				break;
			}
			else{
				printf("%d%c%d=%d\n",max,op,min,max/min);
				break;
			}
		case '%':
			if (min==0){
				printf("Error!\n");
				break;
			}
			else{
				printf("%d%c%d=%d\n",max,op,min,max%min);
				break;
			}
	}
}
	

