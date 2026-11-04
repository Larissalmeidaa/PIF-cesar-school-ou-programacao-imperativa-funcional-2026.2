/*Questão 21. Cálculo de Reajuste Salarial com Base em Categorias — Uma empresa concederá
aumentos salariais diferenciados de acordo com o cargo e o tempo de serviço. Crie um programa que
leia o salário atual e o código do cargo (1 = Técnico; 2 = Gerente; 3 = Demais Cargos). Calcule o novo
salário segundo os percentuais:
• Técnico (Código 1): 15% de aumento se salário <= 3000; 10% se salário > 3000.
• Gerente (Código 2): 10% de aumento se salário <= 5000; 5% se salário > 5000.
• Demais Cargos (Código 3): 8% de aumento fixo.
Exiba o valor do aumento em reais e o novo salário reajustado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, percentual, aumento;
    int cargo;

    printf("Salario atual: ");
    scanf("%f", &salario);
    printf("Cargo (1 = Tecnico, 2 = Gerente, 3 = Demais): ");
    scanf("%d", &cargo);

    // escolhe o percentual de acordo com o cargo e o salario
    if (cargo == 1)
        percentual = (salario <= 3000) ? 0.15 : 0.10;
    else if (cargo == 2)
        percentual = (salario <= 5000) ? 0.10 : 0.05;
    else if (cargo == 3)
        percentual = 0.08;
    else
    {
        printf("Cargo invalido!\n");
        return 1;
    }

    aumento = salario * percentual;
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", salario + aumento);

    system("PAUSE");
    return 0;
}
