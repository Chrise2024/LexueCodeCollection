#include<stdio.h>
int MonthSet[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int MonthOffset[12] = {0,3,3,6,8,11,13,16,19,21,24,26};
void Bit();
void Bit_c(int,int,int);
void Header(int);
void Sep(int);
void Sep0();
void Sep1();
void Sep2();
void Sep3();
void Sep4();
void Week();
int J_Offset(int, int, int);

int main(){
	int year,month,day;
	int i,j,k,l;
	int Jan_offset;
	int d;
	scanf("%d-%d-%d",&year,&month,&day);
	if (year%4==0&&year%100!=0||year%400==0){
		MonthSet[1]=29;
		MonthOffset[2]=1;
	}
	if ((year>3000||year<1000)||month>12||month<1||day>MonthSet[month-1]||day<1){
		Bit();
		return 0;
	}
	Jan_offset = J_Offset(year,month,day)-1;
	for (i = 0;i<12;i++){
		MonthOffset[i] = (MonthOffset[i] + Jan_offset)%7;
	}
	Header(year);
	for (i = 0;i<4;i++){
		Sep(i);
		for (j = 0;j<6;j++){
			printf("| ");
			for (k = 0;k<3;k++){
				for (l = 1;l<8;l++){
					d = l - MonthOffset[i*3 + k] + j*7;
					if (d > 0 && d <= MonthSet[i*3+k]){
						if (d == day && i*3 + k == month-1){
							if (d >=10){
								printf("*%d*",d);
							}
							else{
								printf(" *%d*",d);
							}
						}
						else{
							printf("%3d ",d);
						}
					}
					else{
						printf("    ");
					}
				}
				printf("|");
				if (k!=2)printf(" ");
			}
			printf("\n");
		}
	}
	Sep0();
	Bit_c(year,month,day);
}

int J_Offset(int iYear, int iMonth, int iDay) {
	int y,m,d,w,c;
	c = (iYear - 1) / 100;
	y = (iYear - 1) % 100;
	m = 13;
	d = 1;
	w = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
	if (w >=0) {
		w = w % 7;
	}
	else {
		w = (w % 7) + 7;
	}
	if (w == 0) {
		w = 7;
	}
	return w;
}
void Sep(int iMonth){
	if (iMonth == 0)Sep1();
	else if (iMonth == 1)Sep2();
	else if (iMonth == 2)Sep3();
	else Sep4();
}
void Sep0(){
	printf("+-----------------------------+-----------------------------+-----------------------------+\n");
}
void Sep1(){
	Sep0();
	printf("|             Jan             |             Feb             |             Mar             |\n");
	Sep0();
	Week();
}
void Sep2(){
	Sep0();
	printf("|             Apr             |             May             |             Jun             |\n");
	Sep0();
	Week();
}
void Sep3(){
	Sep0();
	printf("|             Jul             |             Aug             |             Sep             |\n");
	Sep0();
	Week();
}
void Sep4(){
	Sep0();
	printf("|             Oct             |             Nov             |             Dec             |\n");
	Sep0();
	Week();
}
void Week(){
	printf("| Mon Tue Wed Thu Fri Sat Sun | Mon Tue Wed Thu Fri Sat Sun | Mon Tue Wed Thu Fri Sat Sun |\n");
}
void Header(int iyear){
	int e = iyear%10;
	iyear /=10;
	int s = iyear%10;
	iyear /=10;
	int h = iyear%10;
	iyear /=10;
	int t = iyear;
	printf("+-----------------------------------------------------------------------------------------+\n");
	printf("|                                                                                         |\n");
	printf("|                               Calendar of Year [ %d %d %d %d ]                              |\n",t,h,s,e);
	printf("|                                                                                         |\n");
}
void Bit(){
	printf("+-----------------------------------------------------------------------------------------+\n");
	printf("|                                                                                         |\n");
	printf("|                 **                                                                      |\n");
	printf("|        ***      **                                                                      |\n");
	printf("|        ***      **                                 *********   ********** ***********   |\n");
	printf("|        ***      ****                                ***   ***      ***    **  ***  **   |\n");
	printf("|        ** **  ****                  *****           ***    ***     ***   **   ***   *   |\n");
	printf("|        ** ***   ****            ********            ***    ***     ***   **   ***   *   |\n");
	printf("|     ** ** **  *****          *******                ***    ***     ***        ***       |\n");
	printf("|     *******     **   ***          ***               ***    ***     ***        ***       |\n");
	printf("|        **       ********          **                ***   ***      ***        ***       |\n");
	printf("|        **** *****                 **                ********       ***        ***       |\n");
	printf("|  ********         ***             **                ***    ***     ***        ***       |\n");
	printf("|   **  ***    ********             **                ***     **     ***        ***       |\n");
	printf("|      ******  **    **             **                ***     ***    ***        ***       |\n");
	printf("|      ******   *******             **                ***     ***    ***        ***       |\n");
	printf("|     ** **    **    **             **                ***     ***    ***        ***       |\n");
	printf("|    *** **    **    **             ***********       ***     ***    ***        ***       |\n");
	printf("|    **  **    ***** **    ************       **      ***    ***     ***        ***       |\n");
	printf("|   **   **    **    ***    ****                     **********   *********    *****      |\n");
	printf("|        **    **    ***                                                                  |\n");
	printf("|        **    **  *****                                                                  |\n");
	printf("|        **         ***                                  http://online.bit.edu.cn/        |\n");
	printf("|                    **                                                                   |\n");
	printf("|                                                                                         |\n");
	printf("+-----------------------------------------------------------------------------------------+\n");
}
void Bit_c(int iyear,int imonth,int iday){
	printf("|                                                                                         |\n");
	printf("|                 **                                             %d-%02d-%02d               |\n",iyear,imonth,iday);
	printf("|        ***      **                                                                      |\n");
	printf("|        ***      **                                 *********   ********** ***********   |\n");
	printf("|        ***      ****                                ***   ***      ***    **  ***  **   |\n");
	printf("|        ** **  ****                  *****           ***    ***     ***   **   ***   *   |\n");
	printf("|        ** ***   ****            ********            ***    ***     ***   **   ***   *   |\n");
	printf("|     ** ** **  *****          *******                ***    ***     ***        ***       |\n");
	printf("|     *******     **   ***          ***               ***    ***     ***        ***       |\n");
	printf("|        **       ********          **                ***   ***      ***        ***       |\n");
	printf("|        **** *****                 **                ********       ***        ***       |\n");
	printf("|  ********         ***             **                ***    ***     ***        ***       |\n");
	printf("|   **  ***    ********             **                ***     **     ***        ***       |\n");
	printf("|      ******  **    **             **                ***     ***    ***        ***       |\n");
	printf("|      ******   *******             **                ***     ***    ***        ***       |\n");
	printf("|     ** **    **    **             **                ***     ***    ***        ***       |\n");
	printf("|    *** **    **    **             ***********       ***     ***    ***        ***       |\n");
	printf("|    **  **    ***** **    ************       **      ***    ***     ***        ***       |\n");
	printf("|   **   **    **    ***    ****                     **********   *********    *****      |\n");
	printf("|        **    **    ***                                                                  |\n");
	printf("|        **    **  *****                                                                  |\n");
	printf("|        **         ***                                  http://online.bit.edu.cn/        |\n");
	printf("|                    **                                                                   |\n");
	printf("|                                                                                         |\n");
	printf("+-----------------------------------------------------------------------------------------+\n");
}
