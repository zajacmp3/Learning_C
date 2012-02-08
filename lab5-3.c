#include <stdio.h>

main () {
	int n,a=0,c,d=1,e=1,f=1;
	printf("Jak d³ugi ma byæ ci¹g?");
	scanf("%i",&n);
	float tab[n],tab1[n];
	float b=0;
	for(a=1;a<=n;a++){
		printf("Podaj liczbe %i pierwszej tablicy",a);
		scanf("%f",&tab[a]);
		printf("Podaj liczbe %i drugiej tablicy",a);
		scanf("%f",&tab1[a]);
	}
	a--;
	while(f!=0 && d<=n){
		if(tab[d]<tab1[d]){
			printf("Tablica 1 poprzedza tablice 2 w punkcie %i\n",d);
			f=0;
		}
		else if(tab[d]>tab1[d]){
			printf("Tablica 2 poprzedza tablice 1 w punkcie %i\n",d);
			f=0;
		}
		d++;
	}
	if(e==f){
		printf("Takie same\n",a);
	}
}

/*Blad dla 0 0*/
//Nie ma bledu...?
