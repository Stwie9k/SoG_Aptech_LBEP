#include <stdio.h>
#include <math.h>
int main(){
	float s,n,i;
	s=0;
	i=0;
	printf("Nhap vao so n = ");
	scanf("%f",&n);
	while (i<=n){
	
		s+=i;
		i++;
		
	}
	printf("\nTong tu 1 den n la %0.0f ",s);
}
