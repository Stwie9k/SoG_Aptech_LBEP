#include <stdio.h>
#include <math.h>
int main(){

		int a,b,c;
		
		printf("nhap a = ");
		scanf("%d",&a); 
		printf("nhap b = ");
		scanf("%d",&b);
		printf("nhap c = ");
		scanf("%d",&c);
		if(a-b<c && c<a+b && b-c<a && a<b+c && a-c<b && b<a+c){
			printf(" La 3 canh tam giac");
				float p = (1.0)*((a+b+c)/2);
				float k = (1.0)*( 2*p );	
				float s = (1.0)*(sqrt(p*(p-a)*(p-b)*(p-c)));
						printf("\n chu vi = %f",k);	
						printf("\n dien tich = %f",s);	
		}else{
		    printf(" Ban da nhap sai 3 canh tam giac ");
		}
	}
