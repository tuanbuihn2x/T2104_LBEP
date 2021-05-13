#include<stdio.h>

int main(){
	int a,b,c;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	int min=a;
	if(min>b)
	min=b;
	if(min>c)
	min=c;
	printf("so nho nhat: %d",min);
}
