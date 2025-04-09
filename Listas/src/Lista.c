#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"

struct tLista
{
  int *numeros;
  int max;
  int numElementos;
  int ehClassificado;
  int temRepeticao;
};

int buscaBinaria(Lista * lista,int valor, int * pos){
  int posFinal = lista->numElementos-1;
  int posInicial = 0;
  int elementos;
  while(posInicial < posFinal){
    elementos = posFinal - posInicial;
    elementos /= 2;
    if(lista->numeros[elementos]==valor){
      (*pos) = elementos;
      return 1;
    }else if(lista->numeros[elementos] < valor){
      posFinal = elementos + 1;
    }else{
      posInicial = elementos - 1;
    }
  }
  (*pos) = posInicial;
  return 0;
}

Lista *criaLista(int max, int ehClassificado, int temRepeticao)
{
  Lista *lista = (Lista *)malloc(sizeof(Lista));
  lista->max = max;
  lista->numElementos = 0;
  lista->ehClassificado = ehClassificado;
  lista->temRepeticao = temRepeticao;
  lista->numeros = (int *)malloc(sizeof(int) * max);
  return lista;
}

void getNumeroElementos(Lista *lista)
{
  printf("\n%d", lista->numElementos);
}

void listaElementos(Lista *lista)
{
  for (int i = 0; i < lista->numElementos; i++)
  {
    printf("\nvalor: %d", lista->numeros[i]);
  }
}

int listaCheia(Lista *lista)
{
  if (lista->numElementos == lista->max)
    return 1;
  return 0;
}

int listaVazia(Lista *lista)
{
  if (lista->numElementos == 0)
    return 1;
  return 0;
}

void adicionarNumero(Lista *lista, int valor)
{
  int *posicao;
  if (listaCheia(lista))
  {
    printf("\nLista cheia");
  }
  else
  {
    if (lista->temRepeticao)
    {
      if (lista->ehClassificado == 0)
      {
        lista->numeros[lista->numElementos] = valor;
        lista->numElementos++;
      }else{
        
      }
    }
  }
} 