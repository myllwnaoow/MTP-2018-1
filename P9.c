/*Myllena Gonçalves Neto
11721ETE006*/

#include <stdio.h>
#include <string.h>
#include  <stdlib.h>

struct Tamanhos
{
	flutuar largura;
	flutuar a profundidade;
	flutuante altura;
};

struct produto
{
	char numero [ 101 ];
	caractere nomo [ 64 ];
	flutuante preco;
	flutuar dimensoes;
	struct Tamanhos final;
};

estrutura de produtos [ 100 ];

void  cadastrar_produto ()
{
	struct produto;
	int i = 0 ;
	printf ( " \ n \ n Numero do produto um ser cadastrado: " );
	scanf ( " % s " , & produtos [i]. numero );
	printf ( " \ n Nome: " );
	scanf ( " % s " , & produtos [i]. nome );
	getchar ();
	printf ( " \ n Digite o preco: " );
	scanf ( " % f " , & produtos [i]. preco );
	getchar ();
	printf ( " \ n Digite a largura do produto: " );
	scanf ( " % f " , & produtos [i]. end . largura );
	getchar ();
	printf ( " \ n Digite a produndidade do produto: " );
	scanf ( " % f " , & produtos [i]. end . depth );
	getchar ();
	printf ( " \ n Digite a altura do produto: " );
	scanf ( " % f " , & produtos [i]. end . altura );
	printf ( " \ n \ n Produto % s cadastrado com sucesso! \ n \ n " , produtos [i]. numero );
}

void  export_produto ()
{
	char numero_consulta [ 101 ];
	int i = 0 , sinalizador = 0 ;
	printf ( " \ n \ n Digite o número do produto: " );
	fflush (stdin);
	Obtém (numero_consulta);
	
	para (i = 0 ; i < 101 ; i ++)
	{
		if ( strcmp (numero_consulta, produtos [i]. numero ) == 0 )
		{
			flag = 1 ;
			printf ( " \ n \ n % s , R $ % .2f , " , produtos [i]. nome , produtos [i]. preco );
			printf ( " L: % .2f m x P: % .2f m x R: % .2f m \ n \ n " , Produtos [i]. final . Largura , Produtos [i]. final . profundidade , Produtos [i]. end . altura );
			pausa ;
		}
	}
	if (flag == 0 )
	{
		printf ( " \ n \ n Produto nao cadastrado! \ n \ n " );
		retorno ;
	}
}

int  main ()
{
	int opc;
	int i = 0 ;
	estrutura do produto produtos;
	
	Faz
	{
	printf ( " Menu: \ n \ n 1 - Cadastro do produto. \ n 2 - Consultar um produto. \ n 3 - Sair " );
	printf ( " \ n \ n Digite uma opcao desejada: " );
	scanf ( " % d " , & opc);
	getchar ();
		interruptor (opc)
		{
			caso  1 :
				cadastrar_produto ();
				pausa ;
			caso  2 :
				consultar_produto ();
				pausa ;
			caso  3 :
				return  0 ;
		}
	} while (opc! = 4 );
	return  0 ;	
}

