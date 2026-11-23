/* Questão 09. Índice de Massa Corporal com Funções (Cap. 5) — Escreva um programa que
utilize duas funções: float calculaIMC(float peso, float altura), que retorna o IMC (peso /
altura²), e void classificaIMC(float imc), que exibe a classificação: abaixo de 18,5 "Abaixo do
peso"; de 18,5 até 24,9 "Peso normal"; de 25,0 até 29,9 "Sobrepeso"; a partir de 30,0
"Obesidade". Na main(), leia peso e altura, exiba o IMC com duas casas decimais e chame a
classificação.
*/

#include <stdio.h>

float calculaIMC(float peso, float altura);
void classificaIMC(float imc);

int main()
{
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0)
    {
        printf("Valores invalidos.\n");
        return 1;
    }

    imc = calculaIMC(peso, altura);
    printf("IMC: %.2f\n", imc);
    classificaIMC(imc);

    return 0;
}

float calculaIMC(float peso, float altura)
{
    return peso / (altura * altura);
}

void classificaIMC(float imc)
{
    if (imc < 18.5)
        printf("Classificacao: Abaixo do peso\n");
    else if (imc < 25.0)
        printf("Classificacao: Peso normal\n");
    else if (imc < 30.0)
        printf("Classificacao: Sobrepeso\n");
    else
        printf("Classificacao: Obesidade\n");
}
