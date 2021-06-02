#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	printf("nhap chuoi: ");
	scanf("%s",s);
	int a=0,e=0,u=0,o=0,i=0,conlai=0;
	for(int j=0;j<strlen(s);j++){
		if(s[j]=='a')
		a++;
		else if(s[j]=='e')
		e++;
		else if(s[j]=='u')
		u++;
		else if(s[j]=='o')
		o++;
		else if(s[j]=='i')
		i++;
		else
		conlai++;
	}
	printf("co %d ky tu a\n",a);
	printf("co %d ky tu e\n",e);
	printf("co %d ky tu u\n",u);
	printf("co %d ky tu o\n",o);
	printf("co %d ky tu i\n",i);
	printf("so luong ky tu khac trong chuoi: %d",conlai);
}

