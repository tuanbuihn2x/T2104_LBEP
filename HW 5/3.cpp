#include<stdio.h>

int main(){
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	if (a==0 || b==0){
		printf("uoc chung lon nhat cua a va b la: ");
  		printf("%d",a+b);
	}
    else{
    while (a*b != 0){ 
    if (a > b)
    a%=b;
    else
    b%=a;   
    }
    printf("uoc chung lon nhat cua a va b la: %d",a+b);
	}
}
