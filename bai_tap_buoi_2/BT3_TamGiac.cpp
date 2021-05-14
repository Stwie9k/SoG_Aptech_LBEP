#include <stdio.h>
#include <math.h>
int main(){
	 //TAM GIAC
		int x,y,z;
		printf("nhap x = ");
		scanf("%d",&x); // nhap vao gitri
		printf("nhap y = ");
		scanf("%d",&y);
		printf("nhap z = ");
		scanf("%d",&z);
		if(x+y>=z && y+z>=x && x+z>=y){
			printf(" La 3 canh tam giac");
			int a ,s, p;
			a = (x+y+z)/2;
			p = 2*a ;
			s = sqrt(a*(a-x)*(a-y)*(a-z));
			printf("\n chu vi la %d",p);
			printf("\n dien tich la %d",s);	
		}else{
		    printf(" Khong  la 3 canh tam giac");
		}
	}
