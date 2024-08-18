#include<stdio.h>
void writer(int,int);
int main() {
	int m,n,t=0,cont=1,i;
	scanf("%d", &m);
	int w = m*2 - 1;
	for(int i = m;i>1;i--){
		writer(m,i);
		printf("\n");
	}
	for(i = 1;i<=m;i++){
		writer(m,i);
		printf("\n");
    }
}

void writer(int max,int pos){
	int w = max*2 -1;
	int t = max;
	int i;
	for (i = 1;i <max+1;i++){
		if (i>=pos){
			printf("%-2d",t);
			t--;
		}
		else{
			printf("  ");
		}
	}
	t+=2;
	for (i = max;i>1;i--){
		if (i>pos){
			printf("%-2d",t);
			t++;
		}
		//else{
		//	printf("  ");
		//}
	}
}
