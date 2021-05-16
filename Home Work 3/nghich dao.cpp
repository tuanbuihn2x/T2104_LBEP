#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int dao=0;
	while(n!=0){
		int r=n%10;
		dao=dao*10+r;
		n/=10;
	}
	printf("so nghich dao la: %d",dao);
}
