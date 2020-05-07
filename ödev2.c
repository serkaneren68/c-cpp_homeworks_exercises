#include<stdio.h>
#include<stdlib.h>

int main(){
	char katsayi1 ;
	char katsayi2 ;
	
	int carpan ;
	char band1[20];
	char band2[20];				///  for bands ,creating char array v
	char band3[20];			
	char band4[20];
	int kapa = 1 ;				///  control key, continue or exit 
	while(kapa != 0){
		
	
		
		
		printf("kucuk ingilizce harf kullaniniz ---------- \n");
		band1:                  //////////////////////////////////////goto label
		printf("birinci band rengi : ");
		gets(band1);
		
		if (!strcmp(band1,"siyah"))
			katsayi1 = '0' ;
		else if(!strcmp(band1,"kahverengi"))
			katsayi1 = '1';
		else if(!strcmp(band1,"kirmizi"))
			katsayi1 = '2';
		else if(!strcmp(band1,"turuncu"))
			katsayi1 = '3';
		else if(!strcmp(band1,"sari"))
			katsayi1 = '4';
		else if(!strcmp(band1,"yesil"))
			katsayi1 = '5';
		else if(!strcmp(band1,"mavi"))
			katsayi1 = '6';
		else if(!strcmp(band1,"mor"))
			katsayi1 = '7';
		else if(!strcmp(band1,"gri"))
			katsayi1 = '8';
		else if(!strcmp(band1,"beyaz"))
			katsayi1 = '9';
		else{
			printf(" yanlis yazim tekrar giriniz :");
			goto band1;	                                ////if user enter wrong words go to band1 label which is above 
	}
		band2 :	////////////////////////////////////////goto label
		printf("ikinci band rengi : ");
		gets(band2);
		
		if (!strcmp(band2,"siyah"))
			katsayi2 = '0' ;
		else if(!strcmp(band2,"kahverengi"))
			katsayi2 = '1';
		else if(!strcmp(band2,"kirmizi"))
			katsayi2 = '2';
		else if(!strcmp(band2,"turuncu"))
			katsayi2 = '3';
		else if(!strcmp(band2,"sari"))
			katsayi2 = '4';
		else if(!strcmp(band2,"yesil"))
			katsayi2 = '5';
		else if(!strcmp(band2,"mavi"))
			katsayi2 = '6';
		else if(!strcmp(band2,"mor"))
			katsayi2 = '7';
		else if(!strcmp(band2,"gri"))
			katsayi2 = '8';
		else if(!strcmp(band2,"beyaz"))
			katsayi2 = '9';
		else{
			printf(" yanlis yazim tekrar giriniz :");	
			goto band2;									////if user enter wrong words go to band2 label which is above
	}
		
		band3:											/////goto label
		printf("ucuncu band rengi : ");
		gets(band3);
		
		if (!strcmp(band3,"siyah"))
			carpan = 1 ;
		else if(!strcmp(band3,"kahverengi"))
			carpan = 10 ;
		else if(!strcmp(band3,"kirmizi"))
			carpan = 100 ;
		else if(!strcmp(band3,"turuncu"))
			carpan = 1000 ;
		else if(!strcmp(band3,"sari"))
			carpan = 10000 ;
		else if(!strcmp(band3,"yesil"))
			carpan = 100000 ;
		else if(!strcmp(band3,"mavi"))
			carpan = 1000000;
		else if(!strcmp(band3,"mor"))
			carpan = 10000000 ;
		
		else{
			printf(" yanlis yazim tekrar giriniz :");
			goto band3 ;							////if user enter wrong words go to band3 label which is above
	}
		
		
		printf("dorduncu band rengi : ");
		gets(band4);
		

		int a = katsayi1 - '0';					/////////   for calculating  resistance 
		int b = katsayi2 - '0';					////////	
		
		int deger =  ((a*10)+b) * carpan;			/////////   for calculating  resistance
		printf("Direnc degeri : %d  ohm dur\n",deger);
		
		
		
		printf("tekrar icin----- 1\ndurdurmak icin-------0 \n");
		scanf("%d",&kapa);						/////for control, continue or exit
			
		fflush(stdin);						////  buffer cl
}
	
	return 0 ;
}
