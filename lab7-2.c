#include<stdio.h>
main(){

	int a=0,b,c=0,d,e,temp=0,temp1=0,temp2,tabela[1000],przenoszenie[1000],ILE;

	printf("Podaj ilosc posortowanych liczb do ktorych rozpoczniesz wstawianie\n");
	scanf("%i",&a);
	for(temp=0;a>temp;temp++){
		printf("Podaj %i liczbe\n",temp+1);
		scanf("%i",&tabela[temp]);
	}
	printf("Podaj ile liczb chcesz wstawic i posortowac do aktualnego ciagu\n");
	scanf("%i",&b);
	int temptab[b];
	for(temp=0;b>temp;temp++){
		printf("Podaj liczbe");
		scanf("%i",&temptab[temp]);
	}
	temp=0;
	while(b>c){
		if(temptab[temp]<tabela[temp1]){
			temp1++;
		}
		else if(temptab[temp]>=tabela[temp1]){
			c++;								/*Zwiekszamy ilosc wstawionych liczb*/
			temp1=e;							/*temp1=e - bysmy nie utracili wartosci orginalu*/
			for(d=0;e>d;d++){					/*Przepisujemy nie przejrzane liczby z tabeli*/
				przenoszenie[d]=tabela[e];		/*do ktorej wstawiamy do tymczasowe tabeli*/
			}
			tabela[temp1]=temptab[temp];		/*Wstawiamy wartosc*/
			for(d=0;e>d;d++){					/*Dopisujemy reszte tabeli*/
				tabela[e+1]=przenoszenie[d];	/*i otrzmyjemy tabele o 1 element wieksza*/
			}
			temp++;
		}
}