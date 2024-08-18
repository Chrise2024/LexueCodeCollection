#include<stdio.h>
int ms[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int Transform(int iYear, int iMonth, int iDay);
int rn(int);
int main() {
	int year, month, date;
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&date);
	if (year < 1900){
		printf("year is error.\n");
		return 0;
	}
	if (month > 12||month < 1){
		printf("month is error.\n");
		return 0;
	}
	ms[1] = rn(year)?29:28;
	if (date<1||date>ms[month-1]){
		printf("day is error.\n");
		return 0;
	}
	printf("%d\n",Transform(year,month,date));
}
int rn(int iYear){
	return (iYear%4==0&&iYear%100!=0)||iYear%400==0;
}
int Transform(int iYear, int iMonth, int iDay) {
	int y=0, m=0, d=0, w=0, c=0;
	if (iMonth == 1 || iMonth == 2) {
		c = (iYear - 1) / 100;
		y = (iYear - 1) % 100;
		m = iMonth + 12;
		d = iDay;
	}
	else {
		c = iYear / 100;
		y = iYear % 100;
		m = iMonth;
		d = iDay;
	}
	w = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
	if (w >=0) {
		w = w % 7;
	}
	else {
		w = (w % 7) + 7;
	}
	return w;
}
