#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//114514191981011451
int pow_rem(int,int);
int main(){
	char check_array[] = "1x864209753";
	char check_code_ori,input[64];
	int convert_res = 0;
	int i,j;
	scanf("%s",input);
	if (strlen(input) != 18){
		printf("False\n");
		return 0;
	}
	check_code_ori = input[strlen(input) - 1];
	for (i = strlen(input) - 2,j = 0;i >= 0 ;i--){
		convert_res += ((input[i]-'0') * pow_rem(13,j++));
	}
	if (check_array[convert_res % 11] == check_code_ori){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
}

int pow_rem(int base,int exp){
	int r = 1;
	int i;
	while(exp--){
		r *= base;
		r %= 11;
	}
	return r;
}
