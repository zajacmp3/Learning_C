#include <stdio.h>

main(void) {
	int a=0,a1=0,b=0,c=0,temp,temp1,temp2;
	int tab[1000]={0},tab1[1000]={0},wynik[1000]={0},temptab[1000];
/*Podaje liczby jako znaki ASCII po czym rzutuje je i wartosci redukuje do normalnych liczb calkowitych*/
	char znak,znak2;
	printf("Podaj Liczbe 1");
	znak=getchar();
/*	printf("int=%i\n",(int)znak);*/
	while((int)znak>=48 && (int)znak<=57){
		tab[a]=(int)znak-48;
		znak=getchar();
		a++;
	}
	znak=0;
	a--;
	printf("Podaj Liczbe 2");
	znak=getchar();
/*	printf("int=%i\n",(int)znak);*/
	while((int)znak>=48 && (int)znak<=57){
		tab1[a1]=(int)znak-48;
		znak=getchar();
		a1++;
	}						/*Koniec Podawania*/
	a1--;
	/*obracanie tabel*/
	temp1=a;
	for(temp=0;temp<a/2;temp++){
		temp2=tab[temp];
		tab[temp]=tab[temp1];
		tab[temp1]=temp2;
		temp1--;
	}
	/*tabela 1 obrócona*/
	/*obracanie 2 tabeli*/
	temp1=a1;
	for(temp=0;temp<a1/2;temp++){
		temp2=tab1[temp];
		tab1[temp]=tab1[temp1];
		tab1[temp1]=temp2;
		temp1--;
	}
	/*i juz po*/
	printf("Tabela 1\n");
	for(temp=0;temp<=a;temp++){
		printf("%i ",tab[temp]);
	}
	printf("Tabela 2\n");
	for(temp=0;temp<=a;temp++){
		printf("%i ",tab1[temp]);
	}
	printf("\n");
	/*Dodajemy*/
	if(a>a1){
		for(temp=0;temp<=a;temp++){
			wynik[temp]=wynik[temp]+tab1[temp]+tab[temp];
			while(wynik[temp]>=10){
				wynik[temp]=wynik[temp]-10;
				wynik[temp+1]=wynik[temp+1]+1;
			}
		}
	}
	if(a<=a1){
		for(temp=0;temp<=a1;temp++){
			wynik[temp]=wynik[temp]+tab1[temp]+tab[temp];
			while(wynik[temp]>=10){
				wynik[temp]=wynik[temp]-10;
				wynik[temp+1]=wynik[temp+1]+1;
			}
		}
	}
	/*Wynik*/
	printf("wynik\n");
	if(wynik[a+1]>0){
		printf("%i",wynik[a+1]);
	}
	else if(wynik[a1+1]>0){
		printf("%i",wynik[a1+1]);
	}
	if(a>a1){temp=a;}
	else{temp=a1;}
	for(;temp>=0;temp--){
		printf("%i",wynik[temp]);
	}
	printf("\n");
	
}