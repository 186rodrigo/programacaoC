// Idade entre 18 e 30 anos
// Altura superior a 1.70

#include <stdio.h>

int main() {
  int idade = 20;
  float altura = 1.75;

  // idade >= 18 => Verdadeiro
  // idade <= 30 => Verdadeiro
  // Verdadeiro && Verdadeiro => Verdadeiro
  // Verdadeiro && altura > 1.70
  // Verdadeiro && Verdadeiro => Verdadeiro


  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}


