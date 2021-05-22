#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap a ");
	scanf("%d", &a);
	printf("Nhap b");
	scanf("%d", &b);
	
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("\nKhong ton tai UCLN, BCNN");
		} else if(a == 0 || b == 0) {
			printf("Khong co BCNN, UCLN = %d", (a == 0) ? b : a);
		} else { // a, b > 0
			int bc = a * b;

			while(a != 0) {
				int x = a;
				a = b % a;
				b = x;
			}
			
			printf("\nUCLN = %d", b);
			printf("\nBCNN = %d\n", bc / b);
		}
	} else {
		printf("Nhap a, b > 0");
	}
	
	return 0;
}
