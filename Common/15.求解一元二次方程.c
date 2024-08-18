#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double x;
    scanf("%d",&a);
    scanf("%d",&b);
	scanf("%d",&c);
    int delta = b*b - 4*a*c;
    if (a==0&&b==0){
    	printf("Input error!\n");
	}
	else if (!(a == 0)){
    	if (delta < 0){
    		double res1 = b/(a*2.0);
    		double res2 = sqrt(delta*(-1.0));
    		if (b==0){
    			printf("x1=%.6fi\n",res2/(a*2.0));
    			printf("x2=%.6fi\n",(res2*-1)/(a*2.0));
			}
			else{
    			printf("x1=%.6f+%.6fi\n",0-res1,res2/(a*2.0));
    			printf("x2=%.6f%.6fi\n",0-res1,(res2*-1)/(a*2.0));
    		}
		}
		else if (delta == 0){
			double res = b*(-1)/(a*2.0);
			printf("x1=x2=%.6f\n",res);
		}
		else{
    		double res1 = (b*(-1.0)+sqrt(delta))/(a*2.0);
    		double res2 = (b*(-1.0)-sqrt(delta))/(a*2.0);
			printf("x1=%.6f\n",res1);
			printf("x2=%.6f\n",res2);
		}
	}
	else if (a==0){
		double res = (0.0-c)/b;
		printf("x=%.6f\n",res);
	}
}

