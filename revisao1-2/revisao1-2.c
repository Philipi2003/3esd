/*
  A divisão no conjunto de inteiros, produz 2 valores: o quociente e o resto.
  No entanto, quando o divisor é zero há duas situações: impossível – quando apenas o divisor é zero e indeterminada quando o dividendo e o divisor são zeros.

  Faça a função divisaoInteira(...) , que recebe  dois valores (o dividendo e  o divisor) e dois endereços de variáveis, um para armazenar o quociente e outro para o  resto. Esta função realiza a operação de divisão, se for possível, preenchendo adequadamente o quociente e o resto, e retorna o valor 1 (sucesso). Caso a operação não possa ser realizada, a função deve retornar 0 , quando a divisão é impossível  e -1 quando  é indeterminada.

  Utilize sua função adequadamente na main abaixo:
  int main (void)
  {
  int a, b, q, r, st;
  printf("Digite dois valores: ");
    scanf ("%d%d",&a,&b);
    if (DivisaoInteira (.....................)==1){
      printf ("%d /%d = %d com resto %d\n", a,b,q,r);
    }
  else {
      printf ("Erro- divisor eh  0 \n");
    }
  return 0;
  }

*/

#include <stdio.h>

int DivisaoInteira(int dividendo, int divisor, int *quociente, int *resto);
void espaco();

int main(void)
{
  int a, b, q, r, st;
  printf("Digite dois valores: ");
  scanf("%d%d", &a, &b);
  st = DivisaoInteira(a, b, &q, &r);
  espaco();
  if (st == 1)
  {
    printf("%d /%d = %d com resto %d\n", a, b, q, r);
  }
  else if (st == 0)
  {
    printf("Erro - divisor eh 0 \n");
  }
  else
  {
    printf("Erro - divisao inderterminada \n");
  }
  return 0;
}

int DivisaoInteira(int dividendo, int divisor, int *quociente, int *resto)
{
  if (divisor == 0)
    if (dividendo == 0)
      return -1;
    else 
      return 0;
  else
  {
    (*quociente) = dividendo / divisor;
    (*resto) = dividendo % divisor;
    return 1;
  }
}

void espaco()
{
  printf("\n=====================\n\n");
}
