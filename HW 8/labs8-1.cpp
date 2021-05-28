#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x,c=0;
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]<x && a[i]>c)
		c=a[i];
	}
	if(c==0)
	printf("ko tim thay so nao be hon va gan x");
	else
	printf("%d",c);
}
