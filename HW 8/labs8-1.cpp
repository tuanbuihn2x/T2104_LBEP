#include<stdio.h>
#include<limits.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int x,c=INT_MIN,ok=1;
	printf("nhap x: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]<x && a[i]>c){
		c=a[i];
		ok=0;
		}
	}
	if(c==0)
	printf("ko tim thay so nao be hon va gan %d",x);
	else
	printf("so trong mang co gia tri nho va gan %d nhat la: %d",x,c);
}
