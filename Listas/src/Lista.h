/*
  Adicionar           - Erro se lista está cheia
  Repete | Classifica
  N         N         - busca().addAoFinal().then(numElementos++)
  S         N         - addAoFinal().then(numElementos++)
  N         S         - buscaBinaria().then(memcpy(lista[pos+1], lista[pos], sizeof(lista)*(numElementos-1-pos))).then(pos => add(pos)).then(numElementos++)
  S         S         - buscaBinaria().then(memcpy(lista[pos+1], lista[pos], sizeof(lista)*(numElementos-1-pos))).then(pos => add(pos)).then(numElementos++)

  Remover             - Erro se lista está vazia
  Repete | Classifica
  N         N         - busca().then(pos => memmove(lista[pos], lista[numElementos-1], sizeof(lista))).then(numElementos--)
  S         N         - busca e remove, fazendo memmove e voltando a verificar até o final
  N         S         - buscaBinaria().then(pos => memmove(lista[pos], lista[numElementos-1], sizeof(lista))).then(numElementos--)
  S         S         - buscaBinaria().then(while pra achar o posInicio e outro para achar o posFinal).then((posFinal,posInicio) => if(lista[posFinal+1]){memmove(lista[posInicio], lista[posFinal+1], sizeof(lista) * (numElementos-1-posFinal+1))} else {
  memset(lista[posInicio], NULL, posFinal-posInicio+1)} ).then(numElementos -= posFinal-posInicio+1)
*/

typedef struct tLista Lista;

Lista *criaLista(int max, int ehClassificado, int temRepeticao);

void getNumeroElementos(Lista *lista);

void listaElementos(Lista *lista);

int listaCheia(Lista *lista);

int listaVazia(Lista *lista);

void adicionarNumero(Lista *lista, int valor);