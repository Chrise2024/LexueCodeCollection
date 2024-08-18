#include<stdio.h>
int hw(char str[],int s,int e);
int main() {
	char a[64] = {0};
	gets(a);
	int p = 0,k;
	for (k = 0; a[k]; k++) { p = k; }
	if (hw(a,0,p)){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}

int hw(char str[],int s,int e){
	if (e>=s){
		if (str[s]==str[e]){
			return hw(str,s+1,e-1);
		}
		else {
			return 0;
		}
	}
	else if (e<s){
		return 1;
	}
}
