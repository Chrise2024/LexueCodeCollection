#include<stdio.h>
#include<string.h>
int find_s(char in[16384][81],char tar[]);
int isc(char);

int isc(char in){
	//�ж��Ƿ�����ĸ
    return ((in<=90&&in>=65)||(in<=122&&in>=97))?1:0;
}
int find_s(char in[16384][81],char tar[]){//�Ҵʣ�����λ��
	if (in[0] == "\0"||!isc(tar[0])){
		return 0;
	}
	int k;
	for (k = 0;in[k][0]!=0;k++){
		if (!strcmp(in[k],tar))return k+1;
	}
	return 0;
}
int main(){
	char set[16384][81] = {0};//�ַ�����
	int p = 0;
	char a[81];//ʱ����
	char tmp[81] = {0};
	int stp = 0;
	//���뵥�ʡ����š��ո�
	while (gets(a)){
		int i,j;
		for (i = 0;a[i];i++){//���������ַ�
			//ƴװ����
			tmp[stp] = a[i];
			stp++;
			if (isc(a[i])!=isc(a[i+1])||a[i+1]==0){//�ַ���������һ����ͬ���и��
				int t  = find_s(set,tmp);//��set����
				if (t){//�ҵõ������Ӧ����
					printf("%d",t);
				}
				else{//�Ҳ�������ʱ���
					printf("%s",tmp);
					if (isc(tmp[0])){
						strcpy(set[p],tmp);
						//���tmp�ǵ��������set
						p++;//�ƶ�ĩβ
					}
				}
				for (j = 0;j<81;j++)tmp[j] = 0;
				stp = 0;
				//����tmp
			}
		}//һ�н�����������з�
		printf("\n");
	}
}
