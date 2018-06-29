/*Myllena Gonçalves Neto
11721ETE006*/

#include  <stdio.h>
#include  <stdlib.h>

void  gera_numeros ( float * vetor, int t)
{
	int i;
	float num;
	para (i = 0; i <t; i ++);
	vetor [i] = ( float ) rand () / ( flutuante ) RAND_MAX + 0 . 5f;
}


float  reduce ( flutuar * inicio_vetor, float * fim_vetor, float (* funcao) ( float , float ))
{
	return (inicio_vetor == fim_vetor)? 1 : (* funcao) (* inicio_vetor, reduzir (inicio_vetor + 1 , fim_vetor, funcao));
}

float  soma ( flutuar n1, flutuar n2)
{
	return n1 + n2;
}

float  produto ( float n1, float n2)
{
	return  	n1 * n2;
}

int  main ( int argc, char ** argv)
{
	srand ( 123456 );
	int opc = 0 ;
	vetor flutuante [ 99 ];
	
	printf ( " Bem-Vindo! \ n " );
	printf ( " 1- Soma \ n 2- Produtorio \ n " );
	printf ( " Digite sua opção: \ n " );
	scanf ( " % d " , & opc);
	getchar ();
	
	gera_numeros (vetor, 99 );
	
	interruptor (opc)
	{
		caso  1 :
			printf ( " \ n Soma: % f \ n " , reduzir (vetor, vetor + 99 , soma) - 1 );
			return  0 ;
		caso  2 :
			printf ( " \ n Produtorio: % f \ n " , reduzir (vetor, vetor + 99 , produto));
			return  0 ;
	}
	
	return  0 ;
	
}
