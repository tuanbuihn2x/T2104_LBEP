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
	int x;
	printf("nhap x: ");
	scanf("%d",&x);
	int ok=1;
	for(int i=0;i<n;i++){
		if(x==a[i]){
			ok=0;
			break;
		}	
	}
	if(ok)
	printf("%d khong co trong mang",x);
	else
	printf("%d co trong mang",x);
}
