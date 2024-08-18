#include<stdio.h>
int main() {
	char a[32];
	int p,start,end,e,i,k;
	scanf("%s",&a);
	for (k = 0; a[k] != 0; k++) { e = k; }
	scanf("%d %d",&start,&end);
	//printf("%d",e);
	if (end>e){end = e;}
	p = end - start + 1;
	char b[p];
	if (p==1){
		printf("%s\n",a);
		return 0;
	}
	else if (p==2){
		char t = a[start];
		a[start] = a[end];
		a[end] = t;
		printf("%s\n",a);
		return 0;
		
	}
	else if (p == e+1){
		for (int i = 0; i <=e; i++){
			b[e-i]=a[i];
		}
		printf("%s\n",b);
		return 0;
	}
	for (i = start; i <=end; i++) {
		b[p-i]=a[i];
	}
	for (i = start; i <=end; i++) {
		a[i]=b[i-start];
	}
	printf("%s\n",a);
}

