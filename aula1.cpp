    
#include <stdlib.h>
#include <stdio.h>
# include <stdbool.h>
#define TAM 10

int main(int argc, char const *argv[])
{
      
    int  vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};
    int pesquisa, inicio = 0 , meio ,fim = 9;
    bool encontrado = false;
    printf("\n insira as chave a ser pesquisada: ");
    scanf("%d",&pesquisa);
    
    while ((inicio <= fim) && (encontrado == false ))
    {
      meio = (inicio + fim )/2;
      // printf("\n meio:%d", meio);
      if (pesquisa == vetor[meio]){
        encontrado = true;
        printf("\n encontrado!");

      }
      else if (vetor[meio] > pesquisa)
      {
        fim = meio - 1;
        
      }
      else if ( vetor[meio] < pesquisa)
      {
        inicio = meio + 1;
      }
            
      
    }
    if(encontrado == false){
      printf("\n nao encontrado!");
    }
    
      
    return 0;
}


///////////////////////////////////////////////////
/*
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a[15],b[127],c[32767];
    int pesquisa, cont = 0;
    printf("\n\tPesquisa sequencial!");
    for (int  i = 0; i < 32767; i++)
    {
        c[i] = rand();
    printf(" \nvalor na p[%d] :%d",i,c[i]);

    }

    printf("\n insira as chave a ser pesquisada: ");
    scanf("%d",&pesquisa);
    // printf("\n imprimindo a quantidade de interacoes: ");
    for (int  i = 0; i < 32767; i++)
    {
        cont++;
        if (c[i] == pesquisa)
        {
            printf("\n quantidade de interacoes: %d", cont);
            break;
        }
    }
    
    return 0;
}
*/
