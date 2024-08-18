#include<stdio.h>
void transform1(char*);
void transform2(char*,int);
int a,i,j;
char b;
//65 90 97 122
//C   C
// B B 
//  A  
// Z Z 
//Y   Y
int main(){
	scanf("%d\n%c",&a,&b);
	if (b<65||(b>90&&b<97)||b>122){
		printf("input error.\n");
		return 0;
	}
	transform2(&b,a);
	for (i = 1;i<a*2;i++){
		for (j = 1;j<a*2;j++){
			if ((j==i)||(j==a*2-i)){
				printf("%c",b);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		transform1(&b);
		
	}
}

void transform1(char* inp){
	if (*inp == 'a'||*inp == 'A'){
		*inp += 25;
	}
	else{
		*inp -= 1;
	}
}

void transform2(char* inp,int stepper){
	stepper %= 26;
	if ((*inp + stepper > 90 && *inp < 97)||(*inp + stepper > 122)){
		*inp = (*inp - 27 ) + stepper;
	}
	else{
		*inp = *inp + stepper - 1;
	}
}
