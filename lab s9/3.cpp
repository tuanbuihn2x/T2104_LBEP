#include <stdio.h>

int fibo(int n){
	if(n==1)
	return 0;
	else if(n==2 || n==3)
	return 1;
	else{
		int f1=1,f2=1,f3;
		for(int i=3;i<n;i++){
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		return f3;
	}
}

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("so thu %d cua day fibonacci la: %d",n,fibo(n));
}

