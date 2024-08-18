#include<stdio.h>   
int check(int,int,int);  
int tri(int,int,int);  
int main(){  
    int a,b,c;  
    scanf("%d",&a);  
    scanf("%d",&b);  
    scanf("%d",&c);  
    if (tri(a,b,c)){  
        if (check(a,b,c)==0){  
            printf("triangle.\n");  
        }  
        else if (check(a,b,c)==1){  
            printf("equilateral triangle.\n");  
        }  
        else{  
            printf("isoceles triangle.\n");  
        }  
    }  
    else{  
        printf("non-triangle.\n");  
    }  
      
}  
int tri(int x,int y,int z){  
    if ((x+y>z)&&(x+z>y)&&(y+z>x)){  
        return 1;  
    }  
    else{  
        return 0;  
    }  
}  

int check(int x,int y,int z){  
    if (x*x+y*y==z*z||x*x+z*z==y*y||y*y+z*z==x*x){  
        return 0;  
    }  
    else if(x==y&&y==z){  
        return 1;  
    }  
    else{  
        return 2;  
    }  
      
} 
