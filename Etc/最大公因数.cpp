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
	//���������������С����������*��һ������������������������һ��
	for (i = min(a,b)/2;i>0;i--){//ȡ������������Դ����ʼѭ��
		if (a%i==0&&b%i==0){
			printf("GND(%d,%d)=%d",a,b,i);
			break;
		}
	}
	return 0;
}
int min(int m,int n){//�ȴ�С��������Сֵ
	if (m>n){
		return n;
	}
	else {
		return m;
	}
}
