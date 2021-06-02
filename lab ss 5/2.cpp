#include <stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if(n==1)
	printf("so fibonacci thu nhat la: 0");	
	else if(n==2 || n==3)
	printf("so fibonacci thu %d la: 1",n);
	else{
	int f1=1,f2=1,f3;
	for(int i=3;i<n;i++){
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("so fibonacci thu %d la: %d",n,f3);
	}
}

