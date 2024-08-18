#include<stdio.h>
char event[64];
int year, month, date;
int delta_d,delta_y;
int Transform(int iYear, int iMonth, int iDay);
int main() {
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&date);
	int res = Transform(year, month, date);
	printf("%d\n",res);
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
	if (w == 0) {
		w = 0;
	}
	return w;
}
