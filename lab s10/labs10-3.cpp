#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char s[100][100];
	printf("nhap so chuoi: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap chuoi thu %d: ",i+1);
		scanf("%s",s[i]);
	}
	char tmp[100];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(tmp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],tmp);
			}
		}
	}
	printf("cac chuoi sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
}

