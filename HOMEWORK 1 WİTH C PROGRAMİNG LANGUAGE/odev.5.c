#include <stdio.h>
int main(){
	int derece;
	float celcius;
	printf("lutfen bir fahrenhait cinsinden sicaklik degeri giriniz\n");
	scanf("%d",&derece);
	celcius=(derece-32)*(0.5555555555555556);
	printf("%f",celcius);
	return 0;
	
	
}
