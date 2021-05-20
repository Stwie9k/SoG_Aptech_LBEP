#include <stdio.h>
#include <math.h>
int main(){
	float s,n,i;
	s=0;
	i=1;
	printf("Nhap vao so n = ");
	scanf("%f",&n);
	while (i<=n){
	
		s+=1/i;
		i++;
		
	}
	printf("\nTong tu 1 den n la %f ",s);
}
