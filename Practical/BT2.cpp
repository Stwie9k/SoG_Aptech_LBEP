#include "stdio.h"
#include "string.h"
void upperCase(char s[]){
	for(int i=0; i<strlen(s); i++){
		if(s[i]>=97 && s[i]<=122){
			s[i] = s[i]-32;
		}
	}
}

int main(){
	char s[100] = "";
	printf("Nhap vao chuoi s : ");
	fgets(s, sizeof(s), stdin);
	printf("Chuoi s vua nhap la : %s", s);
	upperCase(s);
	printf("Chuoi s duoc chuyen doi la : %s", s);		
}

