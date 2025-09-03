#include <stdio.h>

int main(){

  float montant,taxe;
  printf("entrer montant en dollar : ");
  scanf("%f",&montant);

  taxe = montant * 1.05f;
  printf("montant avec le taxe ajoutee est : $%2.f ",taxe);

  return 0;
}