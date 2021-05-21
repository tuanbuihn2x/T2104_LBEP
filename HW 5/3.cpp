#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if (a==0 || b==0)
    printf("%d",a+b);
    else{
    while (a*b != 0){ 
    if (a > b)
    a%=b;
    else
    b%=a;   
    }
    printf("%d",a+b);
	}
}
