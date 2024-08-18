#include <stdio.h>
int min(int,int);
int main(){
	int a,b;
	int i;
	scanf("%d %d",&a,&b);
	if (a%b==0||b%a==0){
		printf("GND(%d,%d)=%d",a,b,min(a,b));
		return 0;
	}
	//最大公因数必须是最小数的因数，*而一个数的因数不会大于数本身的一半
	for (i = min(a,b)/2;i>0;i--){//取最大公因数，所以从最大开始循环
		if (a%i==0&&b%i==0){
			printf("GND(%d,%d)=%d",a,b,i);
			break;
		}
	}
	return 0;
}
int min(int m,int n){//比大小，返回最小值
	if (m>n){
		return n;
	}
	else {
		return m;
	}
}
