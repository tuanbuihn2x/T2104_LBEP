#include <stdio.h>

bool snt(int n){
	if(n<2)
	return false;
	else{
		for(int i=2;i<=n/2;i++){
			if(n%i==0)
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("%d",snt(n));
}


