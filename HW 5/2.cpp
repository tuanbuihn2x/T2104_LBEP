#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("%d\n%d",n,sum+n);
}
