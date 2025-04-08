#include <stdio.h>
#include "Lista.h"

int main()
{
    Lista *lista = criaLista(10, 0, 1);

    adicionarNumero(lista, 4);
    adicionarNumero(lista, 2);

    getNumeroElementos(lista);

    listaElementos(lista);

    return 0;
}
