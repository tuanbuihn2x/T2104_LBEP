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

int min(int n,int m){
	int min=n;
	if(m<n)
	min=m;
	return min;
}

int max(int n,int m){
	int max=n;
	if(m>n)
	max=m;
	return max;
}

int main(){
	int n,m;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap m: ");
	scanf("%d",&m);
	printf("cac so nguyen to giua %d va %d la:\n",min(n,m),max(n,m));
	int ok=1;
	for(int i=min(n,m);i<=max(n,m);i++){
		if(snt(i)){
			ok=0;
			printf("%d\n",i);
		}
	}
	if(ok)
	printf("khong co so nguyen to nao nam giua %d va %d",min(n,m),max(n,m));
}

