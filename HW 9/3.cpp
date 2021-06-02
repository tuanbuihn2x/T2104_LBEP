#include <stdio.h>

int min(int a,int b){
	int min=a;
	if(b<a){
		min=b;
	}
	return min;
}

int max(int a,int b){
	int max=a;
	if(b>a){
		max=b;
	}
	return max;
}

int ucln(int a,int b){
	int minn=min(a,b),maxx=max(a,b);
	if(maxx%minn==0)
	return minn;
	for(int i=maxx/2;i>=1;i--){
		if(maxx%i==0 && minn%i==0)
		return i;
	}
}
int main(){
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	printf("uoc chung lon nhat cua a va b la: %d",ucln(a,b));
}

