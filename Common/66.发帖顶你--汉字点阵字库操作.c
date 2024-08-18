#include<stdio.h>
#include<stdlib.h>
int an[8] = {128,64,32,16,8,4,2,1};
int main() {
	int i,j,k;
	int size,position;
	int posx,posy;
	char file[64],fill,bg;
	scanf("%d,%s",&size,&file);
	scanf("%d,%c,%c",&position,&bg,&fill);
	int wid = size/8;
	unsigned char charact[size][wid];
	posy = position % 100 - 1;
	posx = position / 100 - 16;
	FILE *fp;
	fp=fopen(file,"rb");
	fseek(fp,(94*posx+posy)*size*wid,0);
	fread(charact,size*wid,1,fp);
	for (i=0;i<size;i++){
		for (j=0;j<wid;j++){
			for (k=0;k<8;k++){
				if (charact[i][j] & an[k])
					printf("%c",fill);
				else
					printf("%c",bg);
			}
		}
		printf("\n");
	}
}
