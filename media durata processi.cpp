#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Titolo: Media processi
   Autore: Tarquini Lorenzo
   Data: 10/04/2017
   Classe: 3°INA
   Versione: 1.0 */
int main(){
	int N; //numero di processi
	int durata[20]; //array durata processi
	int I; //contatore
	int S; //somma durate
	float M; //media tempi
	do{		//controllo del numero dei processi da inserire 
		printf("quanti processi vuoi memorizzare? \n");
		scanf("%d",&N);
	}while(N>20 || N<0);
	for(I=0;I<=N-1;I++){  //inserimento delle durate dei processi
		printf("Inserisci la durata del processo\n");
		scanf("%d",&durata[I]);
	}
	S=0;
	for(I=0;I<=N-2;I++){  //somma delle durate dei processi
		S=S+durata[I];
	}
	M=(float)S/N;  //media delle durate dei processi
	printf("La media del tempo dei processi e' %f\n",M);
}

