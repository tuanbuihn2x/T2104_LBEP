#include<stdio.h>

int main(){
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	int max=a,min=b;
	if(a<b){
	max=b;
	min=a;
	}
	for(int i=1;i<=min;i++){
		if((max*i)%min==0){
			printf("boi chung lon nhat cua a va b la: %d",max*i);
			break;
		}
	}
}
