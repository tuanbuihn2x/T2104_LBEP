#include<stdio.h>
#include<math.h>

int main(){
	double n,r;
	int nam;
	printf("nhap tien gui:");
	scanf("%lf",&n);
	printf("nhap so nam gui:");
	scanf("%d",&nam);
	r=pow(1.08,nam);
	n=n*(1+r);
	printf("so tien sau %d nam thu duoc voi lai suat kep 8%% 1 nam la: %lf",nam,n);
}
