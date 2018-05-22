/* Myllena Gonçalves Neto
11721ETE006 */
#include <stdio.h>
int  main ()
{
    int esta = 0 , i = 0;
    char bits [256];
    printf ( " Inserir uma sequencia de numeros binarios " );
    scanf ( " % s " , & bits [i]);
    while (bits [i]!=' \ 0 ' )

        {
        if (esta == 0 && bits [i] == ' 0 ' )
        {
            esta = 0 ;
        }
        else  if (esta == 0 && bits[i] == ' 1 ' )
        {
            esta = 1 ;
        }
        else  if (esta == 1 && bits[i] == ' 0 ' )
        {
            esta = 2 ;
        }
         else  if (esta == 2 && bits[i] == ' 1 ' )
        {
            esta = esta;
        }
         else  if (esta == 2 && bits[i] == ' 0 ' )
        {
            esta = 1 ;
        }
        else  if (esta == 1 && bits[i] == ' 1 ' )
        {
            esta = 0 ;
        }

        {
            esta = esta;
        }
        i ++;
    }
    if (esta == 0 ) {
            printf ( " \ n E multiplo de 3 " );
    }
    if (esta!=0) {
         printf ( " \ n Nao e multiplo de 3 " );
    }
    printf ( " \ n Uma sequencia original e % s " , bits);
    printf ( " \ n O estado e igual a % d " , esta);
}
