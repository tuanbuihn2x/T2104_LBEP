#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,d,p,s;
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	if(a+b>c && a+c>b && b+c>a){
		d=a+b+c;
		p=d/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("a,b,c la canh cua 1 tam giac co chu vi = %.0f, dien tich = %.2f",d,s);
	}
	else{
		printf("a,b,c khong phai la canh cua 1 tam giac");
	}
}
