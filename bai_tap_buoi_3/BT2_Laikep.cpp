#include <stdio.h>
#include <math.h>
int main(){
	int A,y;
float M,x;
printf("Nhap so tien goc ban dau ban gui : ");
scanf("%d",&A);
printf("Nhap lai suat/nam : ");
scanf("%f",&x);
printf("Nhap so nam ban muon gui : ");
scanf("%d",&y);
M = A *(pow((1+x),y));
printf("\nTong tien ban nhan duoc sau %d nam la : %f",y,M);
}

