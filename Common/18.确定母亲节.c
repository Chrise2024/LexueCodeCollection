#include<stdio.h>
int main() {
    int year, day, leapyear=0;
    scanf("%d", &year);
    for (int i = 1900; i <= year; i++) {
        if (i%400==0||((i %4==0)&&(i%100!=0)))leapyear += 1;
    }
    day =( (year - 1899) * 365 + leapyear - (31 + 30 + 31 + 31 + 30 + 31 + 30 + 31))%7;
    printf("%d\n", 14 - day);
}
