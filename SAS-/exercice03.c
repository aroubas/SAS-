#include <stdio.h>

int main(){

  float montant,taxe,MA;
  printf("entrer montant en dollar : ");
  scanf("%f",&montant);

  taxe = montant * 5/100;
  MA = montant + taxe;
  printf("montant avec le taxe ajoutee est : $%2.f ",MA);

  return 0;
}
