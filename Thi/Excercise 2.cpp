#include <stdio.h>
#include <string.h>

void upper(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
}

int main(){
	char s[100];
	printf("nhap chuoi: ");
//	scanf("%s",s); // khong doc duoc dau cach
	fgets(s, sizeof(s), stdin); // doc duoc chuoi co dau cach
	upper(s);
	printf("chuoi sau khi chuyen: ");
	printf("%s",s);
}

