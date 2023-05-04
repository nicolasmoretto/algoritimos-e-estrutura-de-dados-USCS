
Nicolas Moretto - 2ANCC - 2023
Exercício:
Implemente um programa que leia 3 números inteiros e informe em qual posição se encontra o maior dentre
eles. Exemplo: se os números lidos forem 10, 30, 14 a saída deve ser: posição 2.
a) Escreva as saídas, entradas e o processamento
b) Implemente em linguagem C
c) Otimize seu código
*******************************************************************************/
#include <stdio.h>

int main()
{
    int total, nulo, branco, valido;
    
    // Entrada
    printf ("Digite o total de votos: ");
    scanf ("%d", &total);
    printf ("Digite o total de votos NULOS: ");
    scanf ("%d", &nulo);
    printf ("Digite o total de votos BRANCOS: ");
    scanf ("%d", &branco);
    valido = total - branco - nulo;
    
    // saídas
    printf (" Nulos = %.1f%% ", 
            (nulo * 1.0) / total * 100);

    return 0;
}



