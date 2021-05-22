#include<stdio.h>

int main(){
	int tt=0;
	printf("chao mung quy khach\n");
	for(;;){
		int n;
		printf("1. Chon mon an\n");
		printf("2. Goi do uong\n");
		printf("3. Thanh toan\n");
		printf("4. Thoat chuong trinh\n");
		printf("nhap lua chon: ");
		scanf("%d",&n);
		if(n==1){
			for(;;){
				int m;
				printf("\nmoi quy khach chon mon an\n\n");
				printf("1. Pho\n");
				printf("2. Bun cha\n");
				printf("3. Banh cuon\n");
				printf("4. Banh da tron\n");
				printf("nhap lua chon: ");
				scanf("%d",&m);
				if(m==1 || m==2){
					tt+=30;
					printf("cam on quy khach\n\n");
					break;
				}
				else if(m==3||m==4){
					tt+=25;
					printf("cam on quy khach\n\n");
					break;
				}
				else
				printf("\nnhap sai, vui long nhap lai\n\n");
			}
		}
		else if(n==2){
			for(;;){
				int m;
				printf("\nmoi quy khach chon do uong\n\n");
				printf("1. Tra da\n");
				printf("2. Coca cola\n");
				printf("3. Pepsi\n");
				printf("4. Bo huc\n");
				printf("nhap lua chon: ");
				scanf("%d",&m);
				if(m==1){
					tt+=3;
					printf("cam on quy khach\n\n");
					break;
				}
				else if(m==2 || m==3){
					tt+=10;
					printf("cam on quy khach\n\n");
					break;
				}
				else if(m==4){
					tt+=15;
					printf("cam on quy khach\n\n");
					break;
				}
				else
				printf("\nnhap sai, vui long nhap lai\n");
			}
		}
		else if(n==3){
			printf("so tien quy khach phai thanh toan la: %d000d\n",tt);
			printf("cam on quy khach\n");
			break;
		}
		else if(n==4)
		break;
		else
		printf("\nnhap sai, vui long nhap lai\n");
	}
}
