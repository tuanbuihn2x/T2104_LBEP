#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("nhap canh a: ");
	scanf("%d",&a);
	printf("nhap canh b: ");
	scanf("%d",&b);
	printf("nhap canh c: ");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		int x=a+b+c;
		float p=(1.0)*x/2;
		float s=(sqrt(p*(p-a)*(p-b)*(p-c)));
		printf("dien tich cua tam giac la: %f",s);
	}
	else{
		printf("a, b, c khong phai la ba canh cua tam giac");
	}		
}

