#include<stdio.h>
int main(){
	int i,n;
	struct{
		char nameandsurname[30];
		int number;
		int note;
	}Students[10];
	printf("kac ogrenci bilgisi gireceksiniz\n");
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		printf("lutfen %d. ogrencinin bilgilerini giriniz\n",i+1);
		printf("Name and Surname : ");
		gets(Students[i].nameandsurname);
		printf("Student number : ");
		scanf("%d",&Students[i].number);
		printf("Student's note : ");
		scanf("%d",&Students[i].note);
		getchar();
	}
	for(i=0;i<n;i++){
		printf("%d. student informations\n",i+1);
		printf("%d    %s  =  %d\n",Students[i].number,Students[i].nameandsurname,Students[i].note);
	}
	return 0;
}
