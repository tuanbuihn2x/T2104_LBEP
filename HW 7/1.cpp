#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n],kq;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==1)
		kq=a[i];
	}
	printf("%d",kq);
}
