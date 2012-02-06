#include<stdio.h>
main(){

	int a=0,b,c=0,d,e,temp=0,temp1=0,temp2,tabela[1000]={0},przenoszenie[1000],ILE;

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
	printf("temp=%i   temp1=%i\n",temp,temp1);
	while(b>c){
			printf("Kraze w petli\n");
			if(temptab[temp]>=tabela[temp1]){
				temp1++;
				printf("temp1++\n");
			}
			else if(temptab[temp]<tabela[temp1]){
				printf("1\n");
				c++;								/*Zwiekszamy ilosc wstawionych liczb*/
				e=temp1;							/*temp1=e - bysmy nie utracili wartosci orginalu*/
				for(d=0;a+b-temp1>=d;d++){					/*Przepisujemy nie przejrzane liczby z tabeli*/
					przenoszenie[d]=tabela[e];		/*ktore wstawiamy do tymczasowej tabeli*/
					e++;
				}
				e=temp1;
				printf("temp=%i   temp1=%i\n",temp,temp1);
				tabela[temp1]=temptab[temp];		/*Wstawiamy wartosc*/
				for(d=0;a+b-temp1>=d;d++){					/*Dopisujemy reszte tabeli*/
					tabela[e+1]=przenoszenie[d];	/*i otrzmyjemy tabele o 1 element wieksza*/
					e++;
				}
				temp++;
				if(temptab[temp-1]<temptab[temp]){						/*Dodane przyspieszenie*/
					printf("Nastepny element - wiekszy\n");
				}
				else if(temptab[temp-1]>=temptab[temp]){
					printf("Nastepny element - mniejszy/rowny\n");
					temp1=0;
				}
			}
	}
	for(temp=0;a+b>temp;temp++){
		printf("%i  ",tabela[temp]);
	}
	printf("\n");
}