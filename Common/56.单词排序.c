#include<stdio.h>
#include<string.h>
int main() {
	char a[5][16384];
	int i,j,k;
	for (i = 0; i<5;i++){
		scanf("%s",a[i]);
	}
	for (i = 0;i<5 ;i++){
		for(j = 4;j>0;j--){
			if (strcmp(a[j],a[j-1])>0){
				char tmp[16384];
				strcpy(tmp,a[j-1]);
				strcpy(a[j-1],a[j]);
				strcpy(a[j],tmp);
			}
		}
	}
	for (i = 0;i<5 ;i++){
		printf("%s\n",a[i]);
	}
}
