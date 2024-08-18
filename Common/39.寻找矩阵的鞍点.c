//"Point:a[%d][%d]==%d"
//"No Point"
#include<stdio.h>
int fack1(int a[100][100], int i, int m, int n){
	int j, f=0, max;
	max = a[i][0];
	for (j = 0; j < n; j++){
	if (a[i][j] > max){
		max = a[i][j];
		f = j;
		}
	}
	return f;
}
int fack2(int a[100][100], int j, int m, int n){
	int i, f = 0;
	int min = a[0][j];
	for (i = 0; i < m; i++){
	if (a[i][j] < min){
		min = a[i][j];
		f = i;
		}
	}
	return f;
}
int main(){
	int m, n, i, j;
	int a[100][100] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
 			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++){
		int f1 = fack1(a, i, m, n);
		int f2 = fack2(a, f1, m, n);
		if (f2 == i){
			printf("Point:a[%d][%d]==%d\n", i, f1, a[i][f1]);
			return 0;
		}
		}
	printf("No Point\n");
	return 0;
}
