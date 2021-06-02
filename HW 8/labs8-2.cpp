#include<stdio.h>

int main(){
	int n;
	printf("nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				i--;
				printf("vui long nhap lai\n");
				break;
			}	
		}
	}
	for(int i=0;i<n;i++){
	printf("%d ",a[i]);
	}
}
