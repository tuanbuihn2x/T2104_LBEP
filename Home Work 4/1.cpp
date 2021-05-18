#include<stdio.h>

// Tính S = 1 + 2 + 3 + ... + 100000

int main(){
	long long s=0;
	for(int i=1;i<=100000;i++){
		s+=i;
	}
	printf("S= %lld",s);
}
