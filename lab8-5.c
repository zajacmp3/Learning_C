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
		if(znak!=10){
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
//&& (tabela[temp]==32 || tabela[temp+1]==32) zmusza program do sprawdzania sylab ze spacjami
		if(juz_sprawdzane==0 && (tabela[temp]==32 || tabela[temp+1]==32)){
			porownywarka[temp][0]=tabela[temp];
			porownywarka[temp][1]=tabela[temp+1];
			sort[temp]=temp;
			sortowanie[temp]=badania(a,temp,tabela);
			if(tabela[temp+1]==32){
				printf("%c - wystopilo %i razy na koncu slowa\n",tabela[temp],sortowanie[temp]);
			}
			else if(tabela[temp]==32){
				printf("%c - wystopilo %i razy na poczatku slowa\n",tabela[temp+1],sortowanie[temp]);
			}
		}
		juz_sprawdzane=0;
	}
//Koniec badania
}