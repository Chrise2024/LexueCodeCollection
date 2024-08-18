#include <stdio.h>
int min(int,int);
int main(){
	char a;
	int end,i;
	scanf("%c",&a);
	if (a>90){//判断大小写并确定输出结束位置(a-65,z-90,A-97,Z-122)
		end = 122;
	}
	else {
		end = 90;
	}
	for (i = a;i<=end;i++){
		printf("%c",i);
	}
	printf("\n");
	return 0;
}
