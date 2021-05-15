#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,x,y;
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh co vo so nghiem");
			}
			else{
				printf("phuong trinh vo nghiem");
			}
		}
		else{
			x=-c/b;
			printf("phuong trinh co 1 nghiem x=%.2f",x);
		}
	}
	else{
		int delta=b*b-4*a*c;
		if(delta==0){
			x=-b/(2*a);
			printf("phuong trinh co nghiem kep x=%.2f",x);
		}
		else if(delta<0){
			printf("phuong trinh vo nghiem");
		}
		else{
			x=(-b+sqrt(delta))/(2*a);
			y=(-b-sqrt(delta))/(2*a);
			printf("phuong trinh co 2 nghiem x=%.2f va y=%.2f",x,y);
		}
	}
}
