/*
All Cases
1:1 5 6
2:25 36
3:376 625
4:9376
5:90625
6:109376 890625
7:2890625 7109376
8:12890625 87109376
9:212890625 787109376
10:1787109376
11:81787109376
12:N/A
13:N/A
14:N/A
15:N/A
*/
#include <stdio.h>
#include <math.h>
int Gen(int);
int main(){
	int n;
	scanf("%d",&n);
	Gen(n);
}

int Gen(int exp){
	int Gi,Gj,Ri;
	double ori_0 = 376;
	double ori_1 = 625;
	int tmp[16];
	if (exp == 1){
		printf("1\n5\n6\n");
		return 0;
	}
	else if (exp == 2){
		printf("25\n76\n");
		return 0;
	}
	else if (exp == 3){
		printf("376\n625\n");
		return 0;
	}
	for (Gi = 3;Gi<exp;Gi++){
		for (Gj = 9;Gj>=0;Gj--){
			double lvl = pow(10,Gi);
			double sum = ori_0*ori_0 + 2*ori_0*lvl*Gj;
			if (fmod(sum,lvl*10) == ori_0 + lvl * Gj){
				ori_0 += lvl * Gj;
				break;
			}
		}
	}
	for (Gi = 3;Gi<exp;Gi++){
		for (Gj = 9;Gj>=0;Gj--){
			double lvl = pow(10,Gi);
			double sum = ori_1*ori_1 + 2*ori_1*lvl*Gj;
			if (fmod(sum,lvl*10) == ori_1 + lvl * Gj){
				ori_1 += lvl * Gj;
				break;
			}
		}
	}
	if (ori_0 < pow(10,exp-1)){
		ori_0 = 376;
	}
	if (ori_1 < pow(10,exp-1)){
		ori_1 = 625;
	}
	if (ori_0 == 376&&ori_1 == 625){
		printf("\n");
		return 0;
	}
	if (ori_0 == 376&&ori_1 != 625){
		printf("%.0lf\n",ori_1);
	}
	else if (ori_1 == 625&&ori_0 != 376){
		printf("%.0lf\n",ori_0);
	}
	else if (ori_0 != 376&&ori_1 != 625){
		if (ori_0 > ori_1){
			printf("%.0lf\n%.0lf\n",ori_1,ori_0);
		}
		else{
			printf("%.0lf\n%.0lf\n",ori_0,ori_1);
		}
	}
}
