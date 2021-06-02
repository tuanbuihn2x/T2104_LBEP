#include <stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if(n==1)
	printf("tiem can duoi cua %d trong day fibonacci la: 0",n);	
	else if(n==2)
	printf("tiem can duoi cua %d trong day fibonacci la: 1",n);
	else{
	int f1=1,f2=1,f3;
	for(;f3<n;){
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("tiem can duoi cua %d trong day fibonacci la: %d",n,f1);
	}
}

