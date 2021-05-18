#include<stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if(n==0 || n==1)
	printf("%d!= 1",n);
	else{
	unsigned long long gt=1;
	for(int i=2;i<=n;i++){
		gt*=i;
	}
	printf("%d!= %llu",n,gt);
	}
}
