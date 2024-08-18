#include<stdio.h>
int jud(int);
int start();
int main(){
	int j = 1,k,i;
	for (k = 1;k<5&&j;k++){
		j = start();
	}
}

int start() {
	int m,n,i;
	scanf("%d  %d", &m ,&n);
	if (m==n&&m==0){
		return 0;
	}
	else if (m<=0||n<=0||m>=n||m<1000||n>9999){
		printf("Error\n");
	}
	else{
		int c = 0;
		for (i = m;i<=n;i++){
			if (i %2==0){
				if (jud(i)){
					printf("%d  ",i);
					c++;
				}
			}
		}
		printf("\ncounter=%d\n",c);
	}
	return 1;
}

int jud(int e){
	int t = e;
	int tmp1 = t%10;
	int tmp2 = (t%100-tmp1)/10;
	int tmp3 = (t%1000-t%100)/100;
	int tmp4 = (t-t%1000)/1000;
	if (tmp1!=tmp2&&tmp1!=tmp3&&tmp1!=tmp4&&tmp2!=tmp3&&tmp2!=tmp4&&tmp3!=tmp4) return 1;
	return 0;
}
