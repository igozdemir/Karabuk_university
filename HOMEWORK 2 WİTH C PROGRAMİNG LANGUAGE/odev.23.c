#include<stdio.h>
int main(){
	int n;
	printf("luften bir sayi girinin\n");
	scanf("%d",&n);
	int x=1;
	int sum=0;
	while(n!=0){
		if(n%2==0){
			sum+=x*0;
			n=n/2;
			x=x*10;
			//printf("x%d\n",sum);
		}
		else{
			sum+=x*1;
			n-=1;
			n=n/2;
			x=x*10;
			//printf("xx%d\n",sum);
		}
	}
			printf("%d\n",sum);
	return 0;
}
