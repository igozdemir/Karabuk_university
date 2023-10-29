#include<stdio.h>
#include<math.h>
int main(){
	int n,b;
	int a=1;
	int x=1;
	printf("lutfen kac satir istediginizi giriniz\n");
	scanf("%d",&n);
	x=b;
	while(x<=n){
		
		while(x>=a){
			
			if(x%2!=0){
				printf("1");
			}
			else{
				printf("0");
			}
			x--;
		}
		b++;
		x=b;
		printf("\n");
	}
    return 0;
}
