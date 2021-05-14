#include <stdio.h>
#include <math.h>
int main(){
	//Max or min
	int a ,b,c,min;
	printf(" nhap vao a=");
	scanf("%d", &a);
	printf(" nhap vao b=");
	scanf("%d", &b);
	printf(" nhap vao c=");
	scanf("%d", &c);
	if(a<b){
		min=a;
		if(min<c){
			printf("\n min la %d",a);
		}else{
			printf("\n min la %d",c);
		}
		
	}else{
		
		min=b;
		if(min<c){
			printf("\n min la %d",b);
		}else{
			printf("\n min la %d",c);
		
		}
		}
		}
	
