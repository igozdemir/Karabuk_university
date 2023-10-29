#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&n);
	int a;
	int u=1;
	int sum=0;
	a=n;
	while(a!=0){
		if(u==3){
			sum-=pow(n,u);
		}
		else{
			sum+=pow(n,u);
		}
		u+=2;
		a--;
	}
	printf("toplam=%d",sum);
	return 0;
}
