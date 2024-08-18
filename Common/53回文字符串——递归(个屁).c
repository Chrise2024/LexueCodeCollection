#include<stdio.h>
int main() {
	char a[32];
	int p,k,i;
	//scanf("%s",&a);
	gets(a);
	for (k = 0; a[k] != 0; k++) { p = k; }
	int t = p;
	for (i = 0; i < p; i++) {
		if (a[i]!=a[p-i]){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
}

