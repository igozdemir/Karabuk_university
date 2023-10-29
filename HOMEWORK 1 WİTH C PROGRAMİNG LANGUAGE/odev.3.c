#include <stdio.h>
int main(){
	int a;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("girdiginiz sayi cifttir");
	}
	else{
		printf("girdiginiz sayi tektir");
	}
	return 0;
}
