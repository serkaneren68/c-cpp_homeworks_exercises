#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include<locale.h>

typedef struct{
	char isim[20];
	char ikinci_ad[20];
	char soyad[20];
	char no[20] ;
}Student;
Student student[20];

int main() {
	setlocale(LC_ALL, "Turkish");	
	FILE *dosya ;
	dosya = fopen("bilgiler.txt","r");       //opening file
	if(dosya == NULL){
		printf("dosya acilamadi");
	}
	else{
		int i = 0;
		for(i=0;!feof(dosya);i++){
			int z = fscanf(dosya,"%s %s %s %s",student[i].no,student[i].isim,student[i].ikinci_ad,student[i].soyad);   //creating objects
			
			
			}
			
	}
	int j,k ;
	Student temp;
	for(j=0;j<20;j++){
		for(k=0;k<20;k++){											//Sorting students objects according to their name
			int a = strcoll(student[j].isim,student[k].isim);		//strcoll is same with strcmp but it understands Turkish character
			if(a<0){
				temp = student[j];												
				student[j] = student[k];
				student[k] = temp ;
			}
		}
		
		
	}
		
	int z ;	
	for(z=0;z<20;z++){
		FILE *yeni;													//opening a file for writing sorting list									
		yeni = fopen("odv4.txt","a");															
		fprintf(yeni,"%s %s %s %s\n",student[z].no,student[z].isim,student[z].ikinci_ad,student[z].soyad);
		fclose(yeni);
	}	
		
	printf("dosya bulundugunuz dizine olusturuldu kontol ediniz");		//you can check path of *.c file   	
			
																					
	return 0;
}
