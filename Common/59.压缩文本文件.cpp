#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int find_s(string in[],string tar);
int isc(char);

int isc(char in){
	//判断是否是字母
    return ((in<=90&&in>=65)||(in<=122&&in>=97))?1:0;
}
int find_s(string in[],string tar){//找词，返回位置
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
	string set[16384] = {"\0"};//字符串池
	int p = 0;
	char a[81] = {0};//时储存
	string tmp = "";
	//分离单词、符号、空格
	while (gets(a)){
		for (int i = 0;a[i];i++){//遍历输入字符
			tmp += a[i];//拼装单词
			if (isc(a[i])!=isc(a[i+1])||a[i+1]=='\0'){//字符类型与下一个不同则切割单词
				int t  = find_s(set,tmp);//在set中找
				if (t){//找得到输出对应数字
					cout<<t;
				}
				else{//找不到输出词本身
					cout<<tmp;
					if (isc(tmp[0])){
						set[p] = tmp;//如果tmp是单词则存入set
						p++;//移动末尾
					}
				}
				tmp = "";//重置tmp
			}
		}//一行结束，打个换行符
		cout<<endl;
	}
}
