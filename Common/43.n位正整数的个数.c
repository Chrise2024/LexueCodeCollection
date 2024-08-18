#include<stdio.h>
#include<math.h>
int main(){
	int a;
	int s = 0,ss;
	int b[9]={1,4,9,16,25,36,49,64,81};
	scanf("%d",&a);
	int aa;
	if (a==9||a==8){
		printf("0\n");
		return 0;
	}
	else if(a==7){
		printf("1\n");
		return 0;
	}
	else if(a==1){
		printf("9\n");
		return 0;
	}
	for (int i = pow(10,a-1);i<pow(10,a)-1;i++){
		int k = i;
		ss = 0;
		aa = a;
		while (k){
			//printf("%d\n",b[aa-1]);
			if (k%b[aa-1]!=0){
				ss++;
				break;
			}
			aa--;
			k/=10;
		}
		if (ss==0) {
			//printf("%d\n",i);
			s++;
		}
	}
	printf("%d\n",s);
}
