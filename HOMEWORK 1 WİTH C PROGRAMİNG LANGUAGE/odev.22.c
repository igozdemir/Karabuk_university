#include<stdio.h>
#include<math.h>
int main(){
	int a,x;
	int ilk;
	int son;
	int bas;
	printf("sayi girsene oglum\n");
	scanf("%d",&a);
	ilk=a%10;
    x=a;
	for(;x!=0;){
		x=x/10;
		bas++;
	}
	x=a;
	while(x>10){
		x=x/10;
		son=x;
		}
			printf("%d\n",ilk);
      		printf("%d\n",son);
	    	printf("%d\n",bas);
		x=a;
		x=x-ilk;
		x=x+son;
		x=x-(pow(10,bas-1)*son);
		x=x+(pow(10,bas-1)*ilk);
		printf("%d",x);
		
	    	return 0;
	    }

