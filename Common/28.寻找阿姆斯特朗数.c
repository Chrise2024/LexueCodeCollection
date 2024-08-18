#include<stdio.h> 
int pow(int,int);
int jud(int,int);
int main(){
	int a,i,j;
	int tmp,res;
	scanf("%d",&a); 
	if (a==1){
		for (i = 1;i<=9;i++){
			printf("%d\n",i);
		}
	}
	if (a==2||a<=0){printf("No output.\n");return 0;} 
    for (j = pow(10,a-1);j<pow(10,a);j++){
    	if (jud(j,a)==j){
    		printf("%d\n",j);
		}
	}
}
int pow(int floor,int exp){
	int t = floor,i;
	if (exp == 1) return floor;
	for (i = 1;i<exp;i++){
		floor*=t;
	}
	return floor;
}

int jud(int k,int f){
	int s = 0;
	int tm;
	while(k!=0){
    	tm = k%10; 
    	k/=10;
    	s+=pow(tm,f);
	}
	return s;
}

