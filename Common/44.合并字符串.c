#include<stdio.h>
#include<string.h>
int main(){
	char a[24];
	const char b[12] = "";
	scanf("%s",&a);
	scanf("%s",b);
	strcat(a,b);
	int p = 0,i,j;
	for (i = 0;i<24;i++){
		if(a[i]==0){
			p =  i;
			break;
		}
	}
	for (i = p;i<24;i++){
		a[i]=0;
	}
	for (i = 0;i<24;i++){
		for (j = 0;j<23;j++){
			if (a[j+1]== 0){
				break;
			}
			if (a[j]>a[j+1]){
				int tmp = a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	printf("%s\n",a);
}
