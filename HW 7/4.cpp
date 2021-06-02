#include<stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int tmp=0,sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>0)
		sum+=a[i];
		else
		sum=0;
		if(sum>tmp)
		tmp=sum;
	}
	printf("chuoi so duong ma co tong lon nhat la: %d",tmp);
}
