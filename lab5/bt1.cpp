#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int m;
    int k;
printf("nhap vao so n =");
scanf("%d",&n);

for(int i=1 ; i<=sqrt(m) ; i++)
	 {
		if(m % i == 0)
		{
			k++;
		}
	}	
	if(k==2){
	printf("\n  k la so nguyen to");
	}else {
			printf("\n la so nguyen to");	
	}	
}
