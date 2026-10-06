/*Questão 27. Simulador de Caixa Eletrônico (Decomposição de Cédulas) — Escreva um programa
que simule o saque de um caixa eletrônico. O usuário informa o valor do saque em reais (número
inteiro positivo). O programa deve calcular e exibir a menor quantidade de cédulas de R$ 100, R$ 50,
R$ 20, R$ 10, R$ 5 e R$ 2 necessárias para compor o valor. Utilize laços de repetição para efetuar as
subtrações sucessivas.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    while (valor >= 100 && valor - 100 != 1 && valor - 100 != 3) { valor -= 100; n100++; }
    while (valor >= 50  && valor - 50  != 1 && valor - 50  != 3) { valor -= 50;  n50++;  }
    while (valor >= 20  && valor - 20  != 1 && valor - 20  != 3) { valor -= 20;  n20++;  }
    while (valor >= 10  && valor - 10  != 1 && valor - 10  != 3) { valor -= 10;  n10++;  }
    while (valor >= 5   && valor - 5   != 1 && valor - 5   != 3) { valor -= 5;   n5++;   }
    while (valor >= 2   && valor - 2   != 1 && valor - 2   != 3) { valor -= 2;   n2++;   }

    printf("\nCedulas de R$ 100: %d\n", n100);
    printf("Cedulas de R$ 50:  %d\n", n50);
    printf("Cedulas de R$ 20:  %d\n", n20);
    printf("Cedulas de R$ 10:  %d\n", n10);
    printf("Cedulas de R$ 5:   %d\n", n5);
    printf("Cedulas de R$ 2:   %d\n", n2);

    printf(valor > 0 ? "Restou R$ %d que nao pode ser pago com essas cedulas.\n" : "", valor);

    system("PAUSE");
    return 0;
}