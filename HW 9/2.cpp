#include <stdio.h>

void insole(int a[],int n){
	printf("cac so le trong mang: ");
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
		printf("%d ",a[i]);
	}
}

int main(){
	int n;
	printf("nhap kich thuoc mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	insole(a,n);
}

