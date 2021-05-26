#include <stdio.h>
#include <math.h>
int main(){
	int a;
	int tien =0;
	do{
	
	printf("\n Kinh chao quy khach - Vui long chon option ");
	printf("\n 1. Chon mon an ");
	printf("\n 2. Chon do uong ");
	printf("\n 3. thanh toan ");
	printf("\n 4. thoat chuong trinh ");
	printf("\n nhap vao lua chon : ");
	scanf("%d",&a);
	switch(a){
		case 1:{
			int b ;
			do{
		        printf("\n 1.Pho bo");
		        printf("\n 2.Bun ca");
		        printf("\n 3.Com chay");
		        printf("\n 4.Quay lai");
		        printf("\n Chon mon :");
		        scanf("%d",&b);
		        if(b==1){
		        	tien+=30;
		        	printf("\n Cam on quy khach da chon Pho bo");
				}else if(b==2){
					tien+=25;
		        	printf("\n Cam on quy khach da chon Bun ca");
				}else if(b==3){
					tien+=15;
		        	printf("\n Cam on quy khach da chon Com chay ");
			}
			}while(b!=4);
			break;
		}
		case 2 :{
			int c ;
			do{
		        printf("\n 1.Cocacola");
		        printf("\n 2.Nuoc loc");
		        printf("\n 3.Nuoc cam");
		        printf("\n 4.Quay lai");
		        printf("\n Chon do uong :");
		        scanf("%d",&c);
		        if(c==1){
		        	tien+=12;
		        	printf("\n Cam on quy khach da chon Pho bo");
				}else if(c==2){
					tien+=7;
		        	printf("\n Cam on quy khach da chon Bun ca");
				}else if(c==3){
					tien+=20;
		        	printf("\n Cam on quy khach da chon Com chay ");
			}
			}while(c!=4);
			break;
		}
		case 3 :{
			printf("\n Tong tien cua quy khach la %d", tien);
			int tien =0;
			break;
		}
		case 4 :{
			break;
		}
		default :{
			printf("\n Vui long chon dung chuc nang ");
			break;
		}
	}
      }while(a!=4);
}

