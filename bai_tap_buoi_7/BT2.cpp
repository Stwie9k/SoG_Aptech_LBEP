#include <stdio.h>
#include <math.h>
int main(){
	int n, a[100];
	printf("Nhap vao so n =");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);
    }
    int  min = 0;
	for(int i = 0; i< n; i++ )
		if( a[i] >0){ 
			min = a[i];
			break;
		}
	if(min != 0 ){
		for(int  i = 0; i< n; i++ ){
			if( a[i] > 0 && a[i] < min ) 
			min = a[i];
		}
		printf("\nSo nguyen duong nho nhat la: %d", min);
	}
	else printf("\nKhong co phan tu am trong mang");
}

