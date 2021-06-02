#include <stdio.h>

int dn(int n){
	int r=0;
	while(n!=0){
		r=r*10+n%10;
		n/=10;
	}
	return r;
}

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("so dao nguoc cua %d la: %d",n,dn(n));
}

