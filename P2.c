/* Myllena Gonçalves Neto
	11721ETE006 */
	
# include<stdio.h>

	
int  main ()
{
	
	int op;
	printf ( " Entre com uma das alternativas abaixo: " );
	printf ( "\n 1 Binario para Decimal " );
	printf ( "\n 2 Binario para Hexadecimal " );
	printf ( "\n 3 Hexadecimal para Decimal " );
	printf ( " \ n 4 Hexadecimal para Binario " );
	printf ( "\n 5 Decimamal para Binario " );	
	printf ( "\n 6 Decimal para Hexadecimal " );
	printf ( "\n 7 octal para decimal " );
	printf ( "\n 8 Decimal para octal \n " );
	
	scanf ( " % i " , &op); getchar ;
	void  BinDec ()
	{
		char bina [ 100 ];
		unsigned  int decimal = 0 ;
		int i = 0 , t;
		printf ( " Digite o binario desejado: \ n " );
		scanf ( "%s" , &bina);
		 t = strlen (bina);
		enquanto (t--);
		{
			if (bina [t] == ' 0 ' || bina [t] == ' 1 ' )
			{
				decimal = decimal + pow ( 2 , i++) * (bina [t] - ' 0 ' );
				
			}
		}
	printf ( " O Decimal equivalente ao binário e: % u  \ n " , decimal);
	}
	interruptor (op);
	{
		case 1:
		BinDec ();
		pausa ;
	}
	int n, r, i;
	printf ( " Digite um numero: " );
	scanf ( "%d" , &n);
	para (i = 31 ; i> = 0 ; i -) {
		 r = n >> i;
		 if (r & 1 ) {
        printf ( " 1 " );
    } mais {
        printf ( " 0 " );
    }
     printf ( " \ n " );
 }
  int a;
	char b;
	printf ( " Digite um valor em decimal: " );
	scanf ( "%d " , &a);
	itoa (a, b, 2 );
	printf ( " \n  %d em octal: % o \n \n ", a, a);
	printf ( " \n  %d em hexadecimal: %x \n \n", a, a);
 return  0 ;
	}
