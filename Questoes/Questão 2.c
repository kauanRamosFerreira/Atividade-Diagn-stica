#include <stdio.h>

int main() {
    float imc,peso,altura;
   printf ("Digite o seu peso:");
   scanf ("%f",& peso);
   printf ("digite a sua altura:");
   scanf ("%f",& altura);
   
   imc= peso/(altura * altura);
   printf ("O seu imc é de : %f",imc);
   
   if (imc <18.5 ) {
   printf ("você esta abaixo do peso");
   }
   else if (imc >= 18.5 && imc < 25) {
   printf ("Você está com seu Peso Normal ");
   }
   else if (imc >= 25 && imc < 30) {
   printf ("Você está com Sobrepeso");
   }
   else if (imc >=30 && imc < 35) {
   printf ("Você esta com Obesidade Grau I");
   }
     else if (imc >=35 && imc < 40) {
   printf ("Você está com Obesidade Grau II");
   }
   else {
   printf ("Você está com Obesidade Grau III");
   }
   return 0;
}