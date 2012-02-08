#include<stdio.h>
main(){
	int a=0,b=0,c=0,d=0,k=1,e,temp,temp1,i,j;
	printf("Ile tabel chcesz podac?");
	scanf("%i",&a);
	printf("Ile pol ma byc w kazdej z tabel?");
	scanf("%i",&b);
	float tab[a][b];
	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			printf("Podaj %i pole tabeli %i",d,c);
			scanf("%f",&tab[c][d]);
			printf("%f",tab[c][d]);
		}
	}
	
/* TESTOWANIE */
	d=0;
	c=0;
	while(d<b && k>=1){
	printf("d=%i   |c=%i\n",d,c);
		for(c=0;c<a;c++){
			printf("%i Pole Tabeli %i wynosi - %i\n",d,c,tab[c][d]);
		}
	d++;
	}
	
	d=0;
	while(d<b && k!=0){
	printf("Badam %i pola tabel\n",d);
		c=0;
		while(c<a-1 && k!=0){
			e=c+1;
			printf("e=%i\n",e);
			if(tab[c][d]!=tab[(e)][d]){
				printf("Wykryto nierownosc pomiedzy tab[%i][%i] a tab[%i][%i]\n",c,d,e,d);
				k=0;
			}
			else if(tab[c][d]=tab[(c+1)][d]){
				printf("ROWNOSC\n");
				k=1;
			}
			c++;
		}
	d++;
	}
	printf("k=%i\n",k);
	if(k==0){
	printf("Wchodze do sortowania\n");
		int n=0;
		int sortowanie[a];
		while(n<a){
		printf("Dodaje i uzupelniam tabele ktora bedzie sortowania analogicznie do sortowania\n");
			sortowanie[n]=n;
			n++;
		}
		n=a;
		printf("Rozpoczynam Sortowanie\n\n\n");
		for(i=0;i<n;i++){
			for (j=0; j<n-1; j++){
				if(tab[n][i]>tab[n][i+1]){
					temp=tab[n][i+1];
					tab[n][i+1]=tab[n][i];
					tab[n][i]=temp;
					temp1=sortowanie[i+1];
					sortowanie[i+1]=sortowanie[i];
					sortowanie[i]=temp1;
				}
			}
		}
		printf("Najwieksza tablica to tablica %i\n",sortowanie[a]+1);
	}
	else{
		printf("Tabele sa rowne leksykograficznie\n");
	}
}