#include<stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int b[a];
	//scanf("%d",b);
	if (a==1){
		scanf("%d",&b[0]);
		printf("%d \n",b[0]);
		return 0;
	}
	//else if(a==2){
	//	printf("2\n2\n");
	//	return 0;
	//}
	if (a%2==0){
		for (j = 0;j<a;j++){
			scanf("%d",&b[j]);
			//printf("%d",b[j]);
		}
		for (i = 0;i<a/2;i++){
			printf("%d",b[i]*(b[-1+a-i]));
			printf(" ");
		}
		printf("\n");
		return 0;
	}
	else{
		for (j = 0;j<a;j++){
			scanf("%d",&b[j]);
		}
		int c = (a+1)/2;
		for (i = 0;i<c-1;i++){
			printf("%d",b[i]*(b[-1+a-i]));
			printf(" ");
		}
		printf("%d \n",b[c-1]);
	}
}
