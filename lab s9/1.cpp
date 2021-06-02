#include <stdio.h>

bool snt(int n){
	if(n>1){
		for(int i=2;i<=n/2;i++){
			if(n%i==0)
			return false;
			}
		return true;
	}
	else
	return false;
}

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=n+1;;i++){
		if(snt(i)){
			printf("so nguyen to lon hon %d va gan %d nhat la: %d",n,n,i);
			break;
		}
	}
}

