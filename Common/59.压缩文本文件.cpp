#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int find_s(string in[],string tar);
int isc(char);

int isc(char in){
	//�ж��Ƿ�����ĸ
    return ((in<=90&&in>=65)||(in<=122&&in>=97))?1:0;
}
int find_s(string in[],string tar){//�Ҵʣ�����λ��
	if (in[0] == "\0"||!isc(tar[0])){
		return 0;
	}
	for (int k = 0;in[k]!="\0";k++){
		if (tar == in[k]){
			return k+1;
		}
	}
	return 0;
}
int main(){
	string set[16384] = {"\0"};//�ַ�����
	int p = 0;
	char a[81] = {0};//ʱ����
	string tmp = "";
	//���뵥�ʡ����š��ո�
	while (gets(a)){
		for (int i = 0;a[i];i++){//���������ַ�
			tmp += a[i];//ƴװ����
			if (isc(a[i])!=isc(a[i+1])||a[i+1]=='\0'){//�ַ���������һ����ͬ���и��
				int t  = find_s(set,tmp);//��set����
				if (t){//�ҵõ������Ӧ����
					cout<<t;
				}
				else{//�Ҳ�������ʱ���
					cout<<tmp;
					if (isc(tmp[0])){
						set[p] = tmp;//���tmp�ǵ��������set
						p++;//�ƶ�ĩβ
					}
				}
				tmp = "";//����tmp
			}
		}//һ�н�����������з�
		cout<<endl;
	}
}
