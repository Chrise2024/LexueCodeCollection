#include<stdio.h>
int main() {
	int b,i;
	scanf("%d",&b);
	int a[b];
	for (i = 0;i < b;i++){
		scanf("%d",&a[i]);
	}
	int p11 = -1,p12 = -1,p21 = -1,p22 = -1;
	int l1 = 0,l2 = 0;
	for (i = 0;i < b;i++){
		if ((p11 == -1) && (a[i]==a[i+1])){
			p11 = i;
		}
		if (a[i]!=a[i+1] && p11 != -1 && p12 == -1){
			p12 = i;
			l1 = p12 - p11;
		}
		if (a[i]==a[i+1] && p11 != -1 && p12 != -1 && p21 == -1){
			p21 = i;
		}
		if (a[i]!=a[i+1] && p11 != -1 && p12 != -1 && p21 != -1 && p22 == -1){
			p22 = i;
			l2 = p22-p21;
		}
		if (p11 != -1 && p12 != -1 && p21 != -1 && p22 != -1){
			if (l2>l1){
				p11 = -1;
				p12 = -1;
				l1 = 0;
			}
			else{
				p21 = -1;
				p22 = -1;
				l2 = 0;
			}
		}
	}
	if (p11==p12&&p21==p22){
		printf("No equal number list.\n");
	}
	else{
		if (l1<l2){
			printf("The longest equal number list is from %d to %d.\n",p21,p22);
		}
		else{
			printf("The longest equal number list is from %d to %d.\n",p11,p12);
		}
	}
}
