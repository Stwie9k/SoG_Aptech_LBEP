#include<stdio.h>
int main(){

int n, du ;
int dn =0;
printf("Nhap vao mot so n : ");
scanf("%d",&n);
if(n<=0||n>9999){
	printf("Moi nhap lai");
	
}else {
	
   while(n>0)
   {
      du = n % 10;
      dn = dn * 10 + du;
      n = n / 10;  
   }
   printf("\nSo dao nguoc cua n la: %d ", dn);
}
}
