#include <stdio.h>

int main(){
  float x , resultat;

  printf("entrer la valeur de x :");
  scanf("%f",&x);
  
  float x2 = x * x;
  float x3 = x2 * x;
  float x4 = x3 * x;
  float x5 = x4 * x;
  
  resultat = 3 * x5 + 2 * x4 - 5 * x3 + x2 + 7 * x - 6;
  
  printf("la resultat final pour x = %.2f est :%2.f\n",x,resultat);
  return 0;
}