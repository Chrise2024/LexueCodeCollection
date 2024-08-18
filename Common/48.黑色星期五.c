#include<stdio.h>

int Ryear(int year){
	return (year%4 == 0 && year%100 != 0) || year%400 == 0 ? 1:0;
}

int Friday(int year){
	int Dy,i;
	int a[12] = {13,31,28,31,30,31,30,31,31,30,31,30};
	int b[12] = {13,31,29,31,30,31,30,31,31,30,31,30};
	int day = 0;
	for(Dy=1998;Dy<year;Dy++){
		if(Ryear(Dy))
			day += 366;
		else
			day += 365;
	}
	day += 3;
	int s = 0;
	int d1=day;
	for(i =0;i<12;i++){
		if(Ryear(year)){
			day += b[i];
			if(day%7 == 5){
				s++;
			}
		}
		else{
			day+=a[i];
			if(day%7 == 5){
				s++;
			}
		}
	}
	if (s>1){
		printf("There are %d Black Fridays in year %d.\n",s,year);
		printf("They are:\n");
	}
	else{
		printf("There is 1 Black Friday in year %d.\n",year);
		printf("It is:\n");
	}
	for(i =0;i<12;i++){
			if(Ryear(year)){
			d1 += b[i];
			if(d1%7 == 5){
				printf("%d/%d/13\n",year,i+1);
			}
		}
		else{
			d1+=a[i];
			if(d1%7 == 5){
				printf("%d/%d/13\n",year,i+1);
			}
		}
	}
}

int main(){
	int g;
	scanf("%d",&g);
	Friday(g);
}

