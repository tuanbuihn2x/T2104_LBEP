#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int tmp=0,sum=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>0)
		sum+=a[i];
		else if(a[i]<0){
			tmp=sum;
			sum=0;
		}
		if(sum>tmp)
		tmp=sum;
	}
	if(a[n-1]>tmp)
	tmp=a[n-1];
	printf("%d",tmp);
}
