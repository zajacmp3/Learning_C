#include<stdio.h>
int n=0, i;
float ciag1[1000], ciag2[1000], ciag[2000];
void scalanie(int i1,int n1,int i2,int n2){
/*Sortowanie poprzez scalanie*/
/*Wykonujemy tak dlugo az nie przejdziemy wszystkich wyrazow ciagow*/
/*dopisujemy do tabeli wynikowej wyraz wiekszy tak dlugo az ich nie zabraknie*/
/*powiekszamy sprawdzany zakres i z kazdym kolejnym obrotem sprawdzamy kolejny wyraz tabeli*/
/*Materia³y pomocnicze: http://pl.wikipedia.org/wiki/Sortowanie_przez_scalanie*/
	if(i1<n1 && i2<n2){
		if(ciag1[i1] <= ciag2[i2]){
			ciag[i] = ciag1[i1];
			i1++;
		}
		else{
			ciag[i] = ciag2[i2];
			i2++;
		}
		i++;
		scalanie(i1, n1, i2, n2);
	}
	else if(i1<n1){
		ciag[i] = ciag1[i1];
		i++;
		i1++;
		scalanie(i1, n1, i2, n2);
	}
	else if(i2<n2){
		ciag[i] = ciag2[i2];
		i++;
		i2++;
		scalanie(i1, n1, i2, n2);
	}
}
main() {
	int  n1, n2, i1, i2;
/*podajemy ciag nie dluzszy niz n1 i zapisuje do tabeli ciag1*/
	printf("\nDlugosc pierwszego ciagu niemalejacego: "); 
	scanf("%i", &n1);
	printf("wyrazy pierwszego ciagu:\n  ");
	for (i1=0; i1<n1; i1=i1+1) {
		scanf("%f", &ciag1[i1]);
		if (i1>0){
		/*test na to czy kolejny wyraz jest mniejszy*/
			if(ciag1[i1]<ciag1[i1-1]){
				printf("\nProsze wpisac liczbe niemniejsza od poprzedniej\n");
				i1--;
			}
		}
	}
	/*podajemy ciag nie dluzszy niz n2*/
	printf("\nDlugosc drugiego ciagu niemalejacego: "); 
	scanf("%i", &n2);
	printf("wyrazy drugiego ciagu:\n  ");
	for (i2=0; i2<n2; i2=i2+1) {
		scanf("%f", &ciag2[i2]);
		if (i2>0){
			if(ciag2[i2]<ciag2[i2-1]){
				printf("\nProsze wpisac liczbe niemniejsza od poprzedniej\n");
				i2--;
			}
		}
	}
	n = n1+n2;  i1=0; i2=0; i=0;
/*wysylamy wartosci dlugosci ciagow oraz ilosci podanych liczb*/
	scalanie(i1, n1, i2, n2);
	printf("\nCiag scalony:\n");
	for (i=0; i<n; i=i+1)  printf("  %f", ciag[i]);
	printf("\n\n");
}