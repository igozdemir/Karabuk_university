#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("lutfen bir binary sayisi giriniz\n");
	scanf("%d",&n);
	int a=0;
	int sum=0;
	int b=0;
	while(n!=0){
		a=n%10;
	    sum+=a*pow(2,b);
	    n=n/10;
		b++;
	}
	printf("decimal=%d",sum);
	return 0;
}
