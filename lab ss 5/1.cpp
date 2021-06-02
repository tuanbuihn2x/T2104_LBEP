#include <stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int ok=1;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			ok=0;
			printf("%d khong phai so nguyen to",n);
			break;
		}
	}
	if(ok)
	printf("%d la so nguyen to",n);	
}

