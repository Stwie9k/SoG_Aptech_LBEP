#include <stdio.h>
#include <math.h>
int main(){
	int n, i, f3,f1=0,f2=1;
	printf("nhap vao so n = ");
	scanf("%d",&n);
	for ( i=2 ; f3+f2<n ;i++){
		if(i<=1){
			f3=i;
		}else
			
		
		f1=f2;
		f2=f3;
		f3=f1+f2;
		}
	printf("\nSo can duoi la :  %d ", f3);
	}
