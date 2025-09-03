#include <stdio.h>
#include <math.h>

int main(){
  
  float rayon ;
  printf("entrer la rayon de sphere :");
  scanf("%f",&rayon);
  
  float volume = (4.0f/3.0f) * M_PI * rayon * rayon * rayon;
  printf("volume de sphere un rayon de %.2f m est :%.2f",rayon,volume);
  return 0;
}