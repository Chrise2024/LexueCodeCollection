#include<stdio.h>
int main(){
	int a,i,j,k;
	scanf("%d",&a);
	int n1 = 0,n2 = 0,n3 = 0;
	int p1[3],p2[3],p3[3];
	int jd,g = 0;
	int numset[9];
	for (i = 0;i<100;i++){
		for(j = 1;j<=9;j++){
			numset[j-1] = j;
		}
		p1[0] = a;
		jd = (i/10);
		p1[1] = jd%10;
		p1[2] = i%10;
		if (p1[1]==a||p1[2]==a||p1[1]==p1[2]){
			continue;
		}
		n1 = i+a*100;
		if (n1*3>999){
			//printf("0,0,0\n");
			break;
		}
		n2 = n1*2;
		jd = n2/100;
		p2[0] = jd;
		jd = (n2/10);
		p2[1] = jd%10;
		p2[2] = n2%10;
		if (p2[1]==p2[0]||p2[2]==p2[0]||p2[1]==p2[2]){
			continue;
		}
		
		n3 = n1*3;
		jd = n3/100;
		p3[0] = jd;
		jd = (n3/10);
		p3[1] = jd%10;
		p3[2] = n3%10;
		if (p3[1]==p3[0]||p3[2]==p2[0]||p3[1]==p3[2]){
			continue;
		}
		//printf("Re-%d,%d,%d\n",n1,n2,n3);
		
		for(j = 0;j<9;j++){
			for (k = 0;k<3;k++){
				if (p1[k]==numset[j]){
					numset[j] = 0;
				}
			}
			for (k = 0;k<3;k++){
				if (p2[k]==numset[j]){
					numset[j] = 0;
				}
			}
			for (k = 0;k<3;k++){
				if (p3[k]==numset[j]){
					numset[j] = 0;
				}
			}
		}
		int s = 0;
		for(j = 0;j<9;j++){
			if (numset[j]!=0){
				s++;
			}
		}
		if (s==0){
			printf("%d,%d,%d\n",n1,n2,n3);
			g++;
		}
	}
	if (g==0){
		printf("0,0,0\n");
	}
}

