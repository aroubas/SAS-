#include <stdio.h>

int main(){
  int a,b,c,d,montant;
  printf("entrer le montant en dollars:");
  scanf("%d",&montant); 

 
  a = montant / 20;
  montant = montant % 20;
  
  b = montant / 10;
  montant = montant %10;

  c = montant / 5;
  montant = montant % 5;

  d = montant;

  printf("Billets de 20$ = %d\n",a);
  printf("Billets de 10$ = %d\n",b);
  printf("Billets de 5$ = %d\n",c);
  printf("Billets de 1$ = %d\n",d);

  return 0;

}