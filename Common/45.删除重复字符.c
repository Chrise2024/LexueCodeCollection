#include<stdio.h>
int main(){
	char a[100];
	scanf("%s",&a);
	int i,j,p = 0;
	for (i = 0;i<100;i++){
		if(a[i]==0){
			p =  i;
			break;
		}
	}
	for (i = p;i<24;i++){
		a[i]=0;
	}
	char tmp;
	p--;
	for (i = 0;i<p;i++){
		if (a[i]==0){
			continue;
		}
		else{
			tmp = a[i];
		}
		for (j = i+1;j<p;j++){
			if (a[j]==tmp){
				a[j] = 0;
			}
		}
	}
	for (j = 0;j<p;j++){
		if (a[j]!=0)printf("%c",a[j]);
	}
	printf("\n");
}
