#include<stdio.h>
int main(){
	int n,c,sum,a;
	printf("lutfen kac islem yapmak istiyorsaniz giriniz\n");
	scanf("%d",&n);
	a=n;
	sum=0;
	a=1;
	while(c<n){
		sum+=a;
		a=(10*a)+1;
		c++;
	}
	printf("toplam=%d",sum);
	return 0;
}
