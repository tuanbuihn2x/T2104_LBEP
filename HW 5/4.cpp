#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int max=a,min=b;
	if(a<b){
	max=b;
	min=a;
	}
	for(int i=1;i<=min;i++){
		if((max*i)%min==0){
			printf("%d",max*i);
			break;
		}
	}
}
