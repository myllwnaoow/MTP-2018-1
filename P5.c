/* Myllena Gonçalves Neto
	11721ETE006*/ 
#include <stdio.h>


int main ()
{
	int m, i, num [64], *bnum;
	char msg[256], *pmsg; 
	for (i=0;i<256; i++)
	msg[i]='\0';
	printf("\tCodificar\n\tDecodificar\n\tEscolha uma:");
	scanf("%d",&m);
	getchar();
	switch(m) {
		case 1:{
			printf("Digite a frase com ate 255 caracteres:\n\n\t");
			gets(msg);
			char*pmsg=msg;
			printf("\n\tFrase codificada: \n\t\t");;
			for(i=0;msg[i]; i++){
				bnum=(int*) pmsg;
				if (bnum[i]!=0)
				printf("%d,",bnum[i]);
				if (bnum[i+1]!=0)
				printf(",");}
				break;
			}
			case 2:
				{
					printf("\t Digite os numeros com ate 64 numeros, sendo o ultimo(64) entre 1 e ""4095!!! \n \t obs: Digite 0 para finalizar a entrada \n\n");
					for (i=0; i<64; i++)
					{
						printf("\t\n %d: \t", i+1);
						scanf("%d", &num[i]);
						pmsg = (char*)num;
						if(num[i]==0)
						break;
					}
					printf("\n\n\t Frase decodificada: %s", pmsg);
				}
		}
		return 0;
	}

