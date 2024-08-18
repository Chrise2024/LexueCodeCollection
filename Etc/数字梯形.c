#include <stdio.h>
int main(){
	int m,n,offset = -1,i,j,rm[100][100] = {0};
	scanf("%d %d",&n,&m);
	int w = n*2-1,num = m,mid = n/2+n%2+n-1;
	for (i = 0;i<w;i++){
		rm[0][i] = num+'0';
		rm[offset += (i<n)][i] = num+'0';
		num = (num+1)%10;
	}
	for (i = 0;i<n;i++){
		for (j = 0;j<mid;j++) printf("%c ",rm[i][j]?rm[i][j]:' ');
		for (j = mid - mid%2 - 1;j>=i;j--) printf("%c%c",rm[i][j]?rm[i][j]:' '," \n"[j==i]);
	}
}
