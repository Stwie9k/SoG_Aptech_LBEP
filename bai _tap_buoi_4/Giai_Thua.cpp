#include <stdio.h>
#include <math.h>
int main(){
	float s,n,i;
	s=1;
	i=1;
	printf("Nhap vao so n = ");
	scanf("%f",&n);
	if(n<0){
		printf("\nNhap lai n");
	}else{
	
	while (i<=n){
	
		s=s*i;
		i++;
		
	}
	printf("\nN giai thua = %0.0f ",s);
}
}
