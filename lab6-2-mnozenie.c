//Mateusz Zajac
//INF UG 2012
#include <stdio.h>
main(void) {
	int a=0,a1=0,b=0,c=0,temp,temp1,temp2,temp3=0,complete=0;
	int tab[1000]={0},tab1[1000]={0},wieksza[1000],wynik[1000]={0},temptab[1000];
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
//Porownanie leksykograficzne tabel - ktora wieksza liczba oraz
//Przepisanie wiekszej liczby do tabeli wieksza
	temp=0;
	printf("aaa kotki dwa\n");
	while(complete==0){
		if(a>a1 || temp==1){
			printf("Tabela pierwsza - wieksza/rowna\n\n");
			for(temp1=0;temp1<=a;temp1++){
				wieksza[temp1]=tab[temp1];
			}
			complete=1;
		}
		else if(a<a1 || temp==2){
			printf("Tabela druga - wieksza\n\n");
			for(temp1=0;temp1<=a1;temp1++){
				wieksza[temp1]=tab1[temp1];
			}
			complete=1;
			temp=2;
		}
		//Porownanie leksykograficzne jezeli ilosc podanych liczb jest taka sama
		else if(a==a1){
			for(temp1=0;temp1<=a;temp1++){
				if(tab[temp1]>=tab1[temp1]){
					temp=1;
				}
				else if(tab[temp1]<tab1[temp1]){
					temp=2;
				}
			}
		}
	}
//Dzialanie mnozenia start
printf("aaa kotki trzy\n");
	complete=0;
	while(complete==0){
		printf("aaa kotki 4\n");
		if(a>a1 || temp==1){
			temp3=0;
			while(temp3<=a1){
				printf("kraze\n");
				for(temp1=0;temp1<=a;temp1++){
					printf("%i + %i * %i = %i\n",wynik[temp1],tab1[temp3],wieksza[temp1],wynik[temp1+temp3]+tab1[temp3]*wieksza[temp1]);
					wynik[temp1+temp3]=wynik[temp1+temp3]+(tab1[temp3]*wieksza[temp1]);
					while(wynik[temp1+temp3]>=10){
						wynik[temp1+temp3]=wynik[temp1+temp3]-10;
						wynik[temp1+temp3+1]=wynik[temp1+temp3+1]+1;
					}
				}
				temp3++;
			}
			complete=1;
		}
		else if(a<a1 || temp==2){
			temp3=0;
			while(temp3<=a){
				for(temp1=0;temp1<=a1;temp1++){
					wynik[temp1+temp3]=wynik[temp1+temp3]+(tab[temp3]*wieksza[temp1]);
					while(wynik[temp1+temp3]>=10){
						wynik[temp1+temp3]=wynik[temp1+temp3]-10;
						wynik[temp1+temp3+1]=wynik[temp1+temp3+1]+1;
					}
				}
				temp3++;
			}
			complete=1;
		}
	}
//Dzialanie mnozenia koniec
//Drukowanie wyniku
	printf("Wynik:\n");
	if(wynik[a+a1+1]>0){
		printf("%i",wynik[a+a1+1]);
	}
	for(temp1=a+a1;temp1>=0;temp1--){
		printf("%i",wynik[temp1]);
	}
	printf("\n");
}