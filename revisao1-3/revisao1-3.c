/*
  Faça  a  função horario que receba um parâmetro (inteiro por valor) com o total de minutos de um evento e receba também dois parâmetros (inteiros por referência) no qual deve preencher a quantidade de hora e de minutos equivalente. Por exemplo: 145 minutos equivale a 2 h e 25 min. Esta função deverá OBRIGATORIAMENTE  chamar a função  DivisaoInteira
  Faça um programa que leia  o tempo de treino (em minutos)  de 10 atletas, mostrando a cada um,  o tempo de treino no formato hh:mm. (utilize a função do item a).
No final deve ser exibido o maior tempo de treino e quantos atletas o fizeram
*/
#include <stdio.h>
#define atletas 10

void horario(int tempoTreino, int *horas, int *minutos);
void calculaMaiorTempo(int tempoTreino, int *maiorTempo, int *contaMaiorTempo);
int divisaoInteira(int dividendo, int divisor, int *quociente, int *resto);
void espaco();

void main()
{
  // variaveis
  int i, tempoTreino, horasTreinadas, minutosTreinados, contaMaiorTempo = 0, maiorTempo = 0;
  // entrada
  for (i = 0; i < atletas; i++)
  {
    printf("Atleta %d: Tempo de treino?", i + 1);
    scanf("%d", &tempoTreino);
    // processo
    calculaMaiorTempo(tempoTreino, &maiorTempo, &contaMaiorTempo);
    horario(tempoTreino, &horasTreinadas, &minutosTreinados);
    espaco();
    printf("Atleta %d fez %d:%d de treino", i + 1, horasTreinadas, minutosTreinados);
    espaco();
  }
  // saida
  espaco();
  horario(maiorTempo, &horasTreinadas, &minutosTreinados);
  printf("O maior tempo de treino foi %d:%d, %d atletas fizeram esse tempo.", horasTreinadas, minutosTreinados, contaMaiorTempo);
}

int divisaoInteira(int dividendo, int divisor, int *quociente, int *resto)
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

void horario(int tempoTreino, int *horas, int *minutos)
{
  divisaoInteira(tempoTreino, 60, horas, minutos);
}

void calculaMaiorTempo(int tempoTreino, int *maiorTempo, int *contaMaiorTempo)
{
  if (tempoTreino > (*maiorTempo))
  {
    (*maiorTempo) = tempoTreino;
    (*contaMaiorTempo) = 1;
  }
  else if (tempoTreino == (*maiorTempo))
  {
    (*contaMaiorTempo) += 1;
  }
}

void espaco()
{
  printf("\n============================\n\n");
}
