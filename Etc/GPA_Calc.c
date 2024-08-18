#include <stdio.h>
int Calc(){
	int score;
	printf("Input Score:");
	scanf("%d",&score);
	if (score < 0 && score != -1 || score > 100){
		printf("Invalid Score\n");
		return 1;
	}
	else if (score < 60 && score >= 0){
		printf("GPA:0\n");
		return 1;
	}
	else if (score == -1){
		return 0;
	}
	else{
		double gpa = 4 - 3*((100-(double)score)*(100-(double)score))/1600;
		printf("GPA:%.6lf\n",gpa);
		return 1;
	}
}
int main(){
	while(Calc());
	return 0;
}
