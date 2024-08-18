#include<stdio.h>
struct player{
	unsigned int ID;
	char Name[9];
	char Sex;
	unsigned char Km1;
	unsigned char Km2;
	unsigned char Km3;
	int Grade;
}althlete[28000];
void column();
void header(int);

int main(){
	int i,j,k;
	int sum = 0;
	FILE* fp;
	char fm[64];
	scanf("%s",&fm);
	fp = fopen(fm,"rb");
	for (i = 0;i<28000&&!feof(fp);i++){
		fread(&althlete[i],1,12,fp);
		althlete[i].Name[8] = 0;
		fread(&althlete[i].Sex,1,4,fp);
		althlete[i].Grade = althlete[i].Km1 + althlete[i].Km2 + althlete[i].Km3;
		sum++;
	}
	struct player ref[28000] = {0};
	struct player p;
	int max = 0,posm = 0;
	for (j = 0;j<200;j++){
		for (i = 0;i<sum;i++){
			if (althlete[i].Grade>max){
				max = althlete[i].Grade;
				//althlete[i].Grade = 0;
				posm = i;
			}
		}
		ref[j] = althlete[posm];
		althlete[posm].Grade = 0;
		posm = 0;
		max = 0;
	}
	int tar = ref[98].Grade;
	//printf("%d",tar);
	for (i = 0;i<200;i++){
		for (j = 0;j<200;j++){
			if (ref[j].Grade == tar&&ref[j+1].Grade == tar){
				if (ref[j].ID>ref[j+1].ID){
					p = ref[j];
					ref[j] = ref[j+1];
					ref[j+1] = p;
				}
			}
		}
	}
	header(sum);
	for (i = 0;i<99;i++){
		printf("| %2d  | %06d | %s | %c | %3d | %3d | %3d | %3d |\n",i+1,ref[i].ID,ref[i].Name,ref[i].Sex,ref[i].Grade,ref[i].Km1,ref[i].Km2,ref[i].Km3);
		if ((i+1)%5 == 0){
			column();
		}
		//printf("| %2d  | %06d | %s | %c | %3d | %3d | %3d | %3d |\n",i,althlete[i].ID,althlete[i].Name,althlete[i].Sex,althlete[i].Grade,althlete[i].Km1,althlete[i].Km2,althlete[i].Km3);
	}
	column();
	fclose(fp);
}

void column(){
	printf("+-----+--------+----------+---+-----+-----+-----+-----+\n");
}
void header(int n){
	printf("+-----------------------------------------------------+\n");
	printf("|                   TOP 99 of %-5d                   |\n",n-1);
	printf("+-----+--------+----------+---+-----+-----+-----+-----+\n");
	printf("| TOP |   ID   |   Name   |Sex| SUM | KM1 | KM2 | KM3 |\n");
	printf("+-----+--------+----------+---+-----+-----+-----+-----+\n");
}
