#include <stdio.h>
#include <locale.h>
int main () {
float lado_a,lado_b,lado_c;

printf("digite o valor do primeiro lado");
scanf("%f",& lado_a);
printf("digite o valor do segundo lado");
scanf("%f",& lado_b);
printf("digite o valor do terceiro lado");
scanf("%f",& lado_c );

  //esta verificando se é um triângulo
if (lado_a + lado_b > lado_c && lado_a + lado_c > lado_b &&
    lado_a + lado_c > lado_a);

if ( lado_a == lado_b && lado_b ==lado_c){
 printf("Triângulo Equilátero");
// `||`Serve como Ou diferente do && que serve como E 
} else if (lado_a ==lado_b || lado_b == lado_c || lado_c == lado_a){
printf ("Triângulo Isóceles");
}else {
printf ("Triângulo Escaleno");
}
  return 0;
}