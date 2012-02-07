//Mateusz Zajac
//INF UG 2012
#include<stdio.h>
int badania(int a, int temp, char tabela[]){
	int wynik=0,temp1=temp;
	while(temp1<=a){
		if(tabela[temp1]==tabela[temp]){
			if(tabela[temp1+1]==tabela[temp+1]){
				wynik=wynik+1;
			}
		}
		temp1++;
	}
	return wynik;
}
main(){
	char tabela[1000],porownywarka[1000],znak,znak1;
	int a=0,b,c,d,temp,temp1,temp2;
//Podawanie tekstu
	printf("Podaj tekst\n");
	znak=getchar();
	while(znak!=10){
		if(znak!=10 && znak!=32){
			tabela[a]=znak;
			a++;
		}
		znak=getchar();
	}
//Koniec podawania tekstu
//Sprawdzanie i badanie mozliwosci par liter
	for(temp=0;temp<=a;temp++){
		printf("%c%c - wystapilo %i razy\n",tabela[temp],tabela[temp+1],badania(a,temp,tabela));
	}
}