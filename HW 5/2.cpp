#include<stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int sum=0;
	printf("cac uoc cua %d: ",n);
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("%d\ntong uoc cua %d: %d",n,n,sum+n);
}
