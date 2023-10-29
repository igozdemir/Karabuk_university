#include<stdio.h>
int main(){
	int a,b,*aptr,*bptr;
	aptr=&a;
	bptr=&b;
	printf("lutfen iki sayi giriniz\n");
	scanf("%d %d",&a,&b);
	printf("sum of the numbers is: %d",(*aptr)+(*bptr));
	return 0;
}
