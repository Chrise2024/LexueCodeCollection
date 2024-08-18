#include<stdio.h>
#include<stdlib.h>

struct Pass_Stru {
	unsigned int Offset;
	unsigned short int Size;
	unsigned char Key;
	char Occupy;
}Ref;

int main() {
	int i,j,k;
	int sn,md9;
	FILE* fp;
	char fm[64];
	char puzzle[32767];
	int target;
	scanf("%s",&fm);
	scanf("%d",&target);
	fp = fopen(fm,"rb");
	for (i = 0; i < 5; i++){
		fseek(fp,(target-1)*8 + i*0x210,0);
		fread(&Ref.Offset,7,1,fp);
		fseek(fp,Ref.Offset,0);
		fread(&puzzle,Ref.Size,1,fp);
		puzzle[0]+=Ref.Key;
		if (puzzle[0] % 0x100 == 'W')continue;
		for (j = 1; j < Ref.Size; j++){
			puzzle[j] += Ref.Key;
			puzzle[j] %= 0x100;
			if (puzzle[j-1] == 'S' && puzzle[j] == 'e'){
				sn = j-1;
			}
			if (puzzle[j-1] == 'M' && puzzle[j] == 'D'){
				md9 = j-1;
			}
		}
		break;
	}
	printf("XH: %02d\n",target);
	printf("SN: %.19s\n",puzzle+sn+12);
	printf("M9: %.32s\n",puzzle+md9+5);
}
