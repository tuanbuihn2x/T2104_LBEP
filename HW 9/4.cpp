#include <stdio.h>

int max(int a,int b){
	int max=a;
	if(b>a){
		max=b;
	}
	return max;
}

int bcnn(int a,int b){
	int maxx=max(a,b);
	for(int i=1;;i++){
		int t=maxx*i;
		if(t%a==0 && t%b==0){
			return t;
		}
	}
}

int main(){
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("boi chung nho nhat cua a va b la: %d",bcnn(a,b));
}

