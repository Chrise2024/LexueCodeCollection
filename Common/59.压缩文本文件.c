#include<stdio.h>
#include<string.h>
int find_s(char in[16384][81],char tar[]);
int isc(char);

int isc(char in){
	//判断是否是字母
    return ((in<=90&&in>=65)||(in<=122&&in>=97))?1:0;
}
int find_s(char in[16384][81],char tar[]){//找词，返回位置
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
	char set[16384][81] = {0};//字符串池
	int p = 0;
	char a[81];//时储存
	char tmp[81] = {0};
	int stp = 0;
	//分离单词、符号、空格
	while (gets(a)){
		int i,j;
		for (i = 0;a[i];i++){//遍历输入字符
			//拼装单词
			tmp[stp] = a[i];
			stp++;
			if (isc(a[i])!=isc(a[i+1])||a[i+1]==0){//字符类型与下一个不同则切割单词
				int t  = find_s(set,tmp);//在set中找
				if (t){//找得到输出对应数字
					printf("%d",t);
				}
				else{//找不到输出词本身
					printf("%s",tmp);
					if (isc(tmp[0])){
						strcpy(set[p],tmp);
						//如果tmp是单词则存入set
						p++;//移动末尾
					}
				}
				for (j = 0;j<81;j++)tmp[j] = 0;
				stp = 0;
				//重置tmp
			}
		}//一行结束，打个换行符
		printf("\n");
	}
}
