#include <stdio.h>

void insole(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]%2==1)
		printf("%5d",a[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insole(a,n);
}

