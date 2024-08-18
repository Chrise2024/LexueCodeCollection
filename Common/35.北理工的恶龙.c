#include<stdio.h>
int main(){
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int a[m],b[n];
	int sum = 0;
	if (m>n||n==0){printf("bit is doomed!\n");return 0;}
	if (m==0){printf("0\n");return 0;}
	for(i =0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for (i = 0;i<m;i++){
		for (j = 0;j<m-1;j++){
			if (a[j]>a[j+1]){
				int tmp = a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for (i = 0;i<n;i++){
		for (j = 0;j<n-1;j++){
			if (b[j]>b[j+1]){
				int tmp = b[j];
				b[j]=b[j+1];
				b[j+1]=tmp;
			}
		}
	}
	int k = m;
	for (i = 0;i<m;i++){
		for (j = 0;j<n;j++){
			if (b[j]>=a[i]){
				sum+=b[j];
				b[j] = -1;
				k-=1;
				break;
			}
		}
	}
	if (k>0){printf("bit is doomed!\n");return 0;}
	printf("%d\n",sum);
}
