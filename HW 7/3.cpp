#include<stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int count=0,tmp=0;
	for(int i=0;i<n;i++){
		if(a[i]>0)
		count++;
		else
		count=0;
		if(count>tmp)
		tmp=count;
	}
	printf("so luong cac so duong lien tiep nieu nhat la: %d",tmp);
}
