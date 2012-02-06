#include<stdio.h>
main(){

	int a=0,b,c,d,temp=0,temp1,temp2,tabela[1000],ILE;

	printf("Podaj ilosc posortowanych liczb do ktorych rozpoczniesz wstawianie\n");
	scanf("%i",&a);
	for(temp=0;a>temp;temp++){
		printf("Podaj %i liczbe\n",temp+1);
		scanf("%i",&tabela[temp]);
	}
}