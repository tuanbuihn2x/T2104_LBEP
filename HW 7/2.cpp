#include<stdio.h>
#include<limits.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]<min)
		min=a[i];
	}
	printf("%d",min);
}
