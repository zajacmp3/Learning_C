//Mateusz Zajac
//INF UG 2012
#include<stdio.h>
main(){
	int a,b,c,d,error=0,temp1=0,temp2=0,e=0,f=0;
	printf("Podaj wymiary pierwszej macierzy\n\n"); ////
	scanf("%i",&a);									//
	printf("%ix?\n\n",a);							//
	scanf("%i",&b);									//Deklaracja wymiarow macierzy
	printf("%ix%i\n\n",a,b);						//
	printf("Podaj wymiary drugiej macierzy\n\n");	//
	scanf("%i",&c);									//
	printf("%ix?\n\n",c);							//
	scanf("%i",&d);									//
	printf("%ix%i\n\n",c,d);						////
	/*if(a<=0 || b<=0 || c<=0 || d<=0) error=1;	*/											//Start Podawania macierzy
	float macierz_pierwsza[a][b],macierz_druga[c][d],wynik[a][d];
	for(temp1=0;temp1<a;temp1++){
		for(temp2=0;temp2<d;temp2++){
			wynik[temp1][temp2]=0;
		}
	}
	for(temp1=0;temp1<a;temp1++){
		for(temp2=0;temp2<b;temp2++){
			printf("Podaj liczbe macierzy z pozycji %i wiersz %i kolumna\n",temp1,temp2);
			scanf("%f",&macierz_pierwsza[temp1][temp2]);
		}
	}
	for(temp1=0;temp1<c;temp1++){
		for(temp2=0;temp2<d;temp2++){
			printf("Podaj liczbe macierzy z pozycji %i wiersz %i kolumna\n",temp1,temp2);
			scanf("%f",&macierz_druga[temp1][temp2]);
		}
	}
	printf("Chcesz wykonac dzialanie:\n");
	for(temp1=0;temp1<a;temp1++){
		printf("| ");
		for(temp2=0;temp2<b;temp2++){
			printf("%f ",macierz_pierwsza[temp1][temp2]);
		}
		printf("|\n");
	}
	printf("Razy\n");
	for(temp1=0;temp1<c;temp1++){
		printf("| ");
		for(temp2=0;temp2<d;temp2++){
			printf("%f ",macierz_druga[temp1][temp2]);
		}
		printf("|\n");
	}
//Rozpoczecie dzialania mnozenia
	if(error==0 && b==c){
		while(f<d){
		printf("WCHODZE\ne=%i    f=%i\n",e,f);
			for(temp1=0;temp1<b;temp1++){
				printf("%f + %f * %f\n",wynik[e][f],macierz_pierwsza[e][temp1],macierz_druga[temp1][f]);
				wynik[e][f]=wynik[e][f]+(macierz_pierwsza[e][temp1]*macierz_druga[temp1][f]);
			}
			e++;
			if(e==a){
				e=0;
				f++;
			}
		}
		printf("Wynik:\ne=%i   f=%i\n",e,f);
		for(temp1=0;temp1<a;temp1++){
			printf("| ");
			for(temp2=0;temp2<d;temp2++){
				printf("%f ",wynik[temp1][temp2]);
			}
			printf("|\n");
		}
	}
	else{printf("Dzialanie niemozliwe\n");}
}