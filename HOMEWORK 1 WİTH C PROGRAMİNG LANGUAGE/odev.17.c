#include<stdio.h>
int main(){
	float n;
	float sum=0;
	float a=1;
	int x=2;
	printf("lutfen bir n degeri giriniz\n");
	scanf("%f",&n);
	n=1/n;
	while(n<a){		
		a=(float)1/x;
		sum+=a;
		x=x+2;
		printf("%f\n",a);
	}
	printf("sum=%f",sum);
	return 0;
}


