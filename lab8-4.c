//Mateusz Zajac
//INF UG 2012
#include<stdio.h>
int badania(int a, int temp, char tabela[]){
	int wynik=0,temp1=temp,temp2;
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
	char tabela[1000],porownywarka[1000][1],znak,znak1;
	int a=0,b,c,d,temp,temp1,temp2,temp3,juz_sprawdzane,sortowanie[1000],sort[1000];
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
	for(temp=0;temp<a-1;temp++){
		for(temp1=0;temp1<temp;temp1++){
			if(porownywarka[temp1][0]==tabela[temp] && porownywarka[temp1][1]==tabela[temp+1]){
				juz_sprawdzane=1;
			}
		}
		if(juz_sprawdzane==0){
			porownywarka[temp][0]=tabela[temp];
			porownywarka[temp][1]=tabela[temp+1];
			sort[temp]=temp;
			sortowanie[temp]=badania(a,temp,tabela);
			printf("%c%c - wystapilo %i razy\n",tabela[temp],tabela[temp+1],sortowanie[temp]);
		}
		juz_sprawdzane=0;
	}
	printf("%c%c\n",porownywarka[0][0],porownywarka[0][1]);
//Koniec badania
//Sortowanie b¹belkowe wyników
//Ÿród³o kodu: http://pl.wikisource.org/wiki/Sortowanie_b%C4%85belkowe/kod
//Modyfikacja: Zmiana nazw tabeli na odpowiadaj¹ca jej tabele w programie
//Modyfikacja: Zmiana zmiennej oraz dodanie rownoleglego analogicznego sortowania tabeli porownywarka wzgledem sortowanie
	printf("Posortowane\n\n");
	int i, j;
	for (i = 0; i<temp; i++){
		for (j=0; j<temp-1; j++){
			if (sortowanie[j] > sortowanie[j+1]){
				temp2 = sortowanie[j+1];
				temp3 = sort[j+1];
				sortowanie[j+1] = sortowanie[j];
				sort[j+1] = sort[j];
				sortowanie[j] = temp2;
				sort[j]=temp3;
			}
		}
	}
//Posortowane
	for(temp1=temp-1;temp1>0;temp1--){
		if(sortowanie[temp1]>0){
			printf("%c%c - %i razy\n",porownywarka[sort[temp1]][0],porownywarka[sort[temp1]][1],sortowanie[temp1]);
		}
	}
	printf("\n");
}