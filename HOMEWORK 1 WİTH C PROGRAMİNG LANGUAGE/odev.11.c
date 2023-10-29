#include<stdio.h>
int main(){
	unsigned int a,b,c,d,e,f,g,h,i,j;
	unsigned int sum=0;
	unsigned int pro=1;
	printf("lutfen 10 adet sayi giriniz\n");
	scanf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	sum=sum+a+b+c+d+e+f+g+h+i+j;
	pro=pro*a*b*c*d*e*f*g*h*i*j;
	printf("%d\n %d",sum,pro);
	return 0;
}
