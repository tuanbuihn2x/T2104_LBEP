#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0,tmp=0;
	for(int i=0;i<n;i++){
		if(a[i]>0)
		count++;
		else if(a[i]<0){
			count=0;
		}
		if(count>tmp)
		tmp=count;
	}
	printf("%d",tmp);
}
