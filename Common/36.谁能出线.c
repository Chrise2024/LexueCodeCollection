#include<stdio.h>
#include<math.h>
int main(){
	int a[10][2];
	int t,i,j,k;
	for(i =0;i<10;i++){
		scanf("%d",&t);
		a[i][1] = t;
		a[i][0] = i;
	}
	/*
	printf("\n");
	for (int i = 0;i<10;i++){
		printf("%d-%d ",a[i][0],a[i][1]);
	}
	*/
	for (i = 10;i>0;i--){
		for (j = 9;j>0;j--){
			if (a[j][1]>a[j-1][1]){
				int tmp1= a[j][0];
				a[j][0]=a[j-1][0];
				a[j-1][0]=tmp1;
				int tmp= a[j][1];
				a[j][1]=a[j-1][1];
				a[j-1][1]=tmp;
			}
		}
	}
	/*
	printf("\n");
	for (int i = 0;i<10;i++){
		printf("%d-%d ",a[i][0],a[i][1]);
	}
	printf("\n");
	*/
	if (a[0][1]==a[9][1]){
		for (i = 0;i<10;i++){
			printf("%d\n",a[i][0]+1);
		}
		return 0;
	}
	for (i = 0;i<9;i++){
		if (a[i][1]==a[i+1][1]){
			printf("%d\n",a[i][0]+1);
			//printf("%d\n",a[i+1][0]+1);
		}
		else if (a[i][1]>a[i+1][1]){
			printf("%d\n",a[i][0]+1);
			break;
		}
	}
}
