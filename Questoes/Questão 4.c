#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
    int num_prog,num_user;  
    // rand gera os numeros
    // +1 porque sem ele ficaria até 99
    num_prog = rand() % 100 + 1;
    printf ("Adivinhe um numero entre 1 e 100: ");
    scanf ("%d",& num_user);

    if (num_user == num_prog)
    {
        printf("Na Mosca!!!");
    }
    else if (num_user > num_prog)
    {
        printf ("Vamos tentar um numero menor na proxima vez");
    }
    else
    {
        printf ("Vamos tentar um numero maior na proxima vez");
    }
    
   return 0 ;
}