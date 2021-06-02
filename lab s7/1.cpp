#include<stdio.h>

int main(){
	int n;
	printf("nhap kich thuoc mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int sum=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			sum+=a[i];
			dem++;
		}	
	}
	float tbc=1.0*sum/dem;
	if(dem==0)
	printf("khong co so le nao trong mang");
	else
	printf("trung binh cong cac so le trong mang: %f",tbc);
}
