#include <stdio.h>

void sx(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}

bool tk(int a[],int n,int x){
	int l=0,h=n-1;
	while(l<h-1){
		int m=(l+h)/2;
		if(x<a[m])
		h=m;
		else if(x>a[m])
		l=m;
		else
		return true;
	}
	return false;
}

int main(){
	int n;
	printf("nhap kich thuoc mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int x;
	printf("nhap x: ");
	scanf("%d",&x);
	sx(a,n);
	if(tk(a,n,x))
	printf("%d co trong mang",x);
	else
	printf("ko tim thay %d trong mang",x);
}

