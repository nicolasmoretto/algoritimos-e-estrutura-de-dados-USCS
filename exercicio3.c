/******************************************************************************
Nicolas Moretto - 2ANCC - 2023
Exercício:
Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma
comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um
algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor
que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int quantiCarro;
    float totalVenda, salarioFixo, comissaoCarro, salarioFinal;

    // Entrada
    printf ("Digite a quantidade de carros: ");
    scanf ("%d",&quantiCarro);
    printf ("Digite o total das vendas: ");
    scanf ("%f",&totalVenda );
    printf ("Digite o salario fixo: ");
    scanf ("%f",&salarioFixo );
    printf ("Digite a comissão por carro: ");
    scanf ("%f",&comissaoCarro );
    
    // Processamento
    salarioFinal = salarioFixo + 
                  quantiCarro*comissaoCarro + 
                  0.05*totalVenda;
    
    // Saída
    printf ("O salario final= %.2f", salarioFinal);

    
    return 0;
}
