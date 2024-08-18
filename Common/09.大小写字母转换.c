#include<stdio.h>  
int main(){  
    //int a,b;  
    char a;  
    scanf("%c",&a);  
    //scanf("%d",&b);  
    if (a>=65&&a<=90){
    	printf("%c\n",a+32);

	}
	else if (a>=97&&a<=122){ 
    	printf("%c\n",a-32);   
	}
	else{
    	printf("%c\n",a);
	}
}  
