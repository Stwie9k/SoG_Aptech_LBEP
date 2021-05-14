#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta,x,x1,x2;
     printf(" nhap vao so a = ");
     scanf("%f",&a);
     printf(" nhap vao so b = ");
     scanf("%f",&b);
     printf(" nhap vao so c = ");
     scanf("%f",&c);
     delta = b*b-4*a*c;
     if(a==0){
     	if(b==0 && c!=0){
     		printf("Phuong trinh vo nghiem");
     		
     		 }else if(b==0 && c==0){
     		 	printf("Phuong trinh co vo so nghiem");
     		 	
			  }else {
			  	x= -c/b;
			  	printf(" Phuong trinh co nghiem x = %0.4f",x);
			  }
			  
			  
     }else if(delta < 0){
     	printf("\n Phuong trinh vo nghiem");
	 }else if(delta==0){
	 	x=x1=x2=-b/(2*a);
	 	printf("\n Phuong trinh co nghiem kep x=x1=x2= %0.4f",x);
	 }else{
	 	x1=(-b+sqrt(delta))/(2*a);
	 	x2=(-b-sqrt(delta))/(2*a);
	 	
	 	printf("\n phuong trinh co hai nghiem phan biet x1= %0.4f , x2= %0.4f",x1,x2);
	 }
	 
     
	}
     
