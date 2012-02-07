#include <stdio.h>

main(void) {
	int a=0,a1=0,b=0,c=0,temp,temp1,temp2;
	int tab[1000]={0},tab1[1000]={0},wynik[1000]={0},temptab[1000];
/*Podaje liczby jako znaki ASCII po czym rzutuje je i wartosci redukuje do normalnych liczb calkowitych*/
	char znak,znak2;
	printf("Podaj Liczbe 1");
	znak=getchar();
//Podanie pierwszej liczby
	while((int)znak>=48 && (int)znak<=57){
		temptab[a]=(int)znak-48;
		znak=getchar();
		a++;
	}
	znak=0;
	a--;
//Koniec podawania 1 liczby
//Przepisywanie tabeli w odwrotnej kolejnosci do tab
	temp2=0;
	for(temp1=a;temp1>=0;temp1--){
		tab[temp2]=temptab[temp1];
		temp2++;
	}
//Pierwsza tabela odwrocona
//Podanie 2 liczby
	printf("Podaj Liczbe 2");
	znak=getchar();
	while((int)znak>=48 && (int)znak<=57){
		temptab[a1]=(int)znak-48;
		znak=getchar();
		a1++;
	}
	a1--;
//Koniec podawania 2 liczby
//Przepisywanie tabeli w odwrotnej kolejnosci do tab1
	temp2=0;
	for(temp1=a1;temp1>=0;temp1--){
		tab1[temp2]=temptab[temp1];
		temp2++;
	}
//Druga tabela odwrocona
//DO USUNIECIA
//Print tabel w naturalnej ich kolejnosci
	printf("Tabela 1\n");
	for(temp=0;temp<=a;temp++){
		printf("%i ",tab[temp]);
	}
	printf("\n");
	printf("Tabela 2\n");
	for(temp=0;temp<=a1;temp++){
		printf("%i ",tab1[temp]);
	}
	printf("\n");
//Koniec printu
//DO USUNIECIA
//Start dzialania odejmowania
	if(a>a1){
		for(temp=0;temp<a1;temp++){
			wynik[temp]=wynik[temp]+tab[temp]-tab1[temp];
			if(wynik[temp]<0){
				tab[temp+1]=tab[temp+1]-1;
				wynik[temp]=wynik[temp]+10;
			}
		}
	}
	else if(a<=a1){
		if(a==a1 && tab1[a1]>tab[a1]){
			for(temp=0;temp<a;temp++){
				wynik[temp]=wynik[temp]+tab1[temp]-tab[temp];
				if(wynik[temp]<0){
					tab1[temp+1]=tab1[temp+1]-1;
					wynik[temp]=wynik[temp]+10;
				}
			}
		}
		else if(a==a1 && tab1[a1]<=tab[a1]){
			for(temp=0;temp<a;temp++){
				wynik[temp]=wynik[temp]+tab1[temp]-tab[temp];
				if(wynik[temp]<0){
					tab1[temp+1]=tab1[temp+1]-1;
					wynik[temp]=wynik[temp]+10;
				}
			}
			temp1=1;
		}
		else{
			for(temp=0;temp<a;temp++){
				wynik[temp]=wynik[temp]+tab1[temp]-tab[temp];
				if(wynik[temp]<0){
					tab1[temp+1]=tab1[temp+1]-1;
					wynik[temp]=wynik[temp]+10;
				}
			}
		}
	}
//Drukowanie wyniku
	printf("wynik\n");
	if(temp1=1){
		printf("-");
	}
	if(a>a1){
		if(wynik[a]>0){
			printf("%i",wynik[a]);
		}
		temp=a;
	}
	else{
		if(wynik[a1]>0){
			printf("%i",wynik[a1]);
		}
		temp=a1;
	}
	for(;temp>=0;temp--){
		if(wynik[temp]>0){
			printf("%i",wynik[temp]);
		}
	}
	printf("\n");
	temp=0;
	while(temp<10){
	printf("%i",wynik[temp]);
	temp++;
	}
}