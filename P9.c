/*Myllena Gonçalves Neto
11721ETE006*/
# include  < stdio.h >
# include  < stdlib.h >
# include  < string.h >

typedef  struct Dimensao {
    flutuar largura;
    flutuante altura;
    flutuar a profundidade;
}
Dimensao;

typedef  struct produto {
    char nomePro [ 64 ];
    flutuante preco;
    Dimensao dimensao;
} Produto;

void  cadastra (Produto * p) {

    printf ( " \ n Digite o produto do produto: " );
    fgets (p-> nomePro , 64 , stdin);
    p-> nomePro [ strlen (p-> nomePro ) - 1 ] = ' \ 0 ' ;

    printf ( " \ n Digite o preco: " );
    scanf ( " % f " , & (p-> preco ));
    getchar ();

    printf ( " \ n Digite a largura: " );
    scanf ( " % f " , & (p-> dimensao . largura ));
    getchar ();

    printf ( " \ n Digite a profundidade: " );
    scanf ( " % f " , & (p-> dimensao . profundidade ));
    getchar ();

    printf ( " \ n Digite a altura: " );
    scanf ( " % f " , & (p-> dimensao . altura ));
}

void  consulta (Produto * p) {
    char c;

    if ( strlen (p-> nomePro ) == 0 ) {
        printf ( " \ n de produto nao cadastrado! \ n " );
        while ((c = getchar ())! = ' \ n ' );
        retorno ;
    }

    printf ( " \ n % s , R $ % .2f , L: % .2fm x P: % .2fm x A: % .2f m \ n " ,
    p-> nomePro , p-> preco , (p> dimensao . Largura ), (p> dimensao . profundidade ), (p> dimensao . Altura ));
    while ((c = getchar ())! = ' \ n ' );
}

int  main () {
    int flag = 0 , flag2;
    Produto * produtos = calloc ( 2 , sizeof (Produto));
    char str [ 2 ] [ 16 ] = { " Cadastro " , " Consulta " };

    fazer {
       printf ( " \ n 1 - Cadastrar \ n 2 - Consulta \ n 3 - Sair \ n - " );
        scanf ( " % d " , & flag);
        getchar ();

        flag2 = 0 ;

        	if (flag == 1 ) {
        		printf ( " \ n Realizar % s \ n " , str [flag- 1 ]);
         		printf ( " \ n 1 - Produto 1 \ n 2 - Produto 2 \ n 3 - Voltar \ n - " );
   	     		scanf ( " % d " , & flag2);
   	     		getchar ();

   	     		interruptor (flag2) {

                        caso  1 :
                            printf ( " \ n Produto % d \ n " , flag2);
                            Cadastra (& Produtos [flag2- 1 ]);
                          	pausa ;

                        caso  2 :
                            printf ( " \ n Produto % d \ n " , flag2);
                            Cadastra (& Produtos [flag2- 1 ]);
                          	pausa ;
                    		}

                    	}

			if (flag == 2 ) {
        		printf ( " \ n Realizar % s \ n " , str [flag- 1 ]);
         		printf ( " \ n 1 - Produto 1 \ n 2 - Produto 2 \ n 3 - Voltar \ n - " );
   	     		scanf ( " % d " , & flag2);
   	     		getchar ();

   	     		interruptor (flag2) {

                        caso  1 :
                            printf ( " \ n Produto % d \ n " , flag2);
                            consulta (& Produtos [flag2- 1 ]);
                          	pausa ;

                        caso  2 :
                            printf ( " \ n Produto % d \ n " , flag2);
                            consulta (& Produtos [flag2- 1 ]);
                          	pausa ;
                    		}

						}
	} while (flag! = 3 );

	livre (produtos);

    return  0 ;
}
