#include <stdio.h>
int main() {
    int valor;
    int nota100, nota50, nota20, nota10, nota5, nota2;
    printf ("Digite o valor para saque: ");
    scanf ("%d", &valor);

    // Calcula cada cédula
    nota100 = valor / 100;
    valor = valor % 100;

    nota50 = valor / 50;
    valor = valor % 50;

    nota20 = valor / 20;
    valor = valor % 20;

    nota10 = valor / 10;
    valor = valor % 10;

    // Verifica os valores
    // || serve como OU
    if ( valor == 1 || valor == 3 || valor == 0) {
        printf("Nao e possivel pagar esse valor com as notas disponiveis.\n");
        return 0;
    }

    // Calcula notas de 5 e 2
    if (valor % 2 == 0) {
        nota5 = 0;
        nota2 = valor / 2;
    } else {
        nota5 = 1;
        nota2 = (valor - 5) / 2;
    }

    if (nota100 > 0) 
    printf ("Notas de 100: %d\n", nota100);
    if (nota50 > 0) 
     printf ("Notas de 50 : %d\n", nota50);
    if (nota20 > 0) 
     printf ("Notas de 20 : %d\n", nota20);
    if (nota10 > 0) 
     printf ("Notas de 10 : %d\n", nota10);
    if (nota5 > 0)  
     printf ("Notas de 5  : %d\n", nota5);
    if (nota2 > 0)  
     printf ("Notas de 2  : %d\n", nota2);

   return 0;
}


