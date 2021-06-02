#include<stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]<a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}	
		}
		printf("mang sau khi sap xep: ");
		for(int j=0;j<=i;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
	printf("%d ",a[i]);
	}
}
