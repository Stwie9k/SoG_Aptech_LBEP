#include <stdio.h>
#include <math.h>
int main(){
	 //TAM GIAC
		int x,y,z;
		int a ,s, p;
		do {
		printf("nhap x = ");
		scanf("%d",&x);
		printf("nhap y = ");
		scanf("%d",&y);
		printf("nhap z = ");
	    scanf("%d",&z);
	    }while (x+y<z && y+z<x && x+z<y);
	    	
	    	a = (x+y+z)/2;
			p = 2*a ;
			s = sqrt(a*(a-x)*(a-y)*(a-z));
				
		
		    printf("\n chu vi la %d",p);
			printf("\n dien tich la %d",s);
		   
			 	
		}
			
		    
	
		
        


