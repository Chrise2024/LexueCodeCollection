#include<stdio.h>
int main(){
	int a[1001]={0};
	int n,m,i;
	scanf("%d %d",&n,&m);
	int count=0;
	int k=-1;
	while(count<n-1){
		int i=0;
		while(i<m){
			k=(k+1)%n;
			if(a[k]==0){
				i++;
				if(i==m){
					a[k]=-1;
					count++;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==0){
			printf("The left child is NO %d.\n",i+1);
			break;
		}
	}
	return 0;
}
