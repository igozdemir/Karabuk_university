#include<stdio.h>
int main(){
	int a,b,c;
	int temp;
	int x;
	printf("lutfen 2 sayi giriniz\n");
	scanf("%d\n%d",&a,&b);
	c=a;
	for(c;c>=1;c--){
		if(a%c==0 && b%c==0){
		printf("en buyuk ortak bolen %d dir",c);
		}
		else{
			c--;
		}
		}
	    return 0;
	}
