#include <stdio.h>
#include <math.h>
int main(){
int i,n;
int s=0;
printf("nhap vao so n = ");
scanf("%d",&n);
printf ("\n cac uoc cua n la : ");
for( i=1 ;i<=n;++i){
if(n % i == 0 ){
 printf(" %d ",i);
 s+=i;
 }
}
printf ("\n Tong cac uoc la %d ",s);
}

