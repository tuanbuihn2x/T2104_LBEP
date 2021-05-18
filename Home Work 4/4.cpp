#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("nhap 3 canh tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	while(a+b<=c || a+c<=b || b+c<=a){
		printf("3 canh khong phai tam giac, vui long nhap lai: ");
		scanf("%d%d%d",&a,&b,&c);
	}
	float chuvi=a+b+c;
	float p=chuvi/2;
	float dientich=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("chu vi tam giac la: %f\ndien tich tam giac la: %f",chuvi,dientich);
}
