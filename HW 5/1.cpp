#include<stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("cac so chan be hon %d: ",n);
	for(int i=0;i<n;i+=2){
		printf("%d ",i);
	}
}
