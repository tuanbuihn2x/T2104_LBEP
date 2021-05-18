#include<stdio.h>

// Tinh S = 1+ 1/2+ 1/3 + 1/4+ ....+ 1/1000

int main(){
	float s=0;
	for(float i=1;i<=1000;i++){
		s+=1/i;
	}
	printf("S= %f",s);
}
