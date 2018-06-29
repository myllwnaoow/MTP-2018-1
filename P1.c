/*Myllena Gonçalves*/ 
/*Matricula = 1172ETE006*/
#include <stdio.h>

 int main () 
{
  
int posi = 0;	
int estado = 0;
  
char var[256];		
  printf ("Declare o numero desejado em binario: ");
  
scanf ("%s", &var[posi]);	
  
 
while (var[posi] != '\0')
    {
      
if (var[posi] != '0' && var[posi] != '1')	
	{
	  
printf ("Esta errado digite novamente :(");	
	  return 1;		
	}
      
if (estado == 0 && var[posi] == '0')	 
	{
	  
estado = 0;	
	}
      
      else if (estado == 0 && var[posi] == '1')	
	{
	  
estado = 1;	
	}
      
      else if (estado == 1 && var[posi] == '0')	
	{
	  
estado = 2;		
	}
      
      else if (estado == 2 && var[posi] == '1')	
	{
	  
estado = estado;	
	}
      
      else if (estado == 2 && var[posi] == '0')	
	{
	  
estado = 1;	
	}
      
      else if (estado == 1 && var[posi] == '1')	
	{
	  
estado = 0;		
	}
      
      else			
	{
	  
estado = estado;
	
}
      
posi++;			
    }
  
 
printf ("A sequencia original e: %s", var);	
  
printf ("\nO estado e: %d\n", estado);	
  
 if (estado == 0)
 {
     printf("O numero e multiplo de 3\n");
 }
 else 
 {
     printf("O numero não e multiplo de 3");
 }
 
return 0;

}
