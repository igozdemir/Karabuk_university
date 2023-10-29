 #include<stdio.h>
 int main(){
 	int feet;
 	float cm;
	printf("lutfen feet cinsinden bir uzunluk birimi giriniz\n");
 	scanf("%d",&feet);
 	cm=feet*(30.48);
 	printf("%f",cm);
 	return 0;
 }
