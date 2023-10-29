#include<stdio.h>
int main(){
	int i,A[5];
	int *ptr;
	for(i=0;i<5;i++){
    printf("lutfen %d sayi giriniz\n",5-i);
    scanf("%d",&A[i]);
	}
	ptr= A;
	for(i=0;i<5;i++,ptr++){
		printf("%d. sayi=%d\n",i+1,*ptr);
	}
	return 0;
}
