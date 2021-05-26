#include <stdio.h>
#include <math.h>
int main(){
	int n, a[100];
	int k;
	printf("Nhap vao so n =");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
	if(a[i]% 2==1 ){
				
		k=a[i];
	}	
	printf("\n So le cuoi cung la %d ", k );
}
