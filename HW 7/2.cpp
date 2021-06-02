#include<stdio.h>
#include<limits.h>

int main(){
	int n;
	printf("nhap kich thuoc mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int min=INT_MAX,tmp=0,ok=0;
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]<min){
			ok=1;
			min=a[i];
		}
	}
	if(ok==0)
	printf("khong co so duong nao trong mang");
	else
	printf("so duong nho nhat trong mang la: %d",min);
}
