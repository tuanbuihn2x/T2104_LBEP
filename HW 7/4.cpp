#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int tmp=0,sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>0)
		sum+=a[i];
		else
		sum=0;
		if(sum>tmp)
		tmp=sum;
	}
	printf("%d",tmp);
}
