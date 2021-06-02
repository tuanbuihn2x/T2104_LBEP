#include<stdio.h>

int main(){
	int n;
	printf("nhap kich thuoc mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int kq=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
		kq=a[i];
	}
	if(kq==0)
	printf("khong co so le nao trong mang");
	else
	printf("so le cuoi cung trong mang: %d",kq);
}
