#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	printf("nhap chuoi: ");
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122)
		s[i]-=32;
	}
	printf("sau khi chuyen cac ki tu thanh in hoa: %s",s);
}

