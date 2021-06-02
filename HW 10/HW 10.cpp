#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	return max;
}

void sx(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}

int main(){
	int n;
	printf("nhap kich thuoc mang: ");
	scanf("%d",&n);
	int *a;
	a=(int *)malloc(n * sizeof(int));
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("so lon nhat cua mang: %d\n",max(a,n));
	printf("mang sap xep tu nho den lon: ");
	sx(a,n);
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	int m;
	printf("\nnhap them kich thuoc mang: ");
	scanf("%d",&m);
	a=(int *)realloc(a,m);
	for(int i=n;i<n+m;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("so lon nhat cua mang: %d\n",max(a,n+m));
	printf("mang sap xep tu nho den lon: ");
	sx(a,n+m);
	for(int i=0;i<n+m;i++){
		printf("%5d",a[i]);
	}
}

