#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis.
    float salario_liquido, porcentagem_reajuste, reajuste, reajuste_salario, salario_com_reajuste, valor_abono, salario_elegivel_ao_abono, salario_final;

    //Cabeçalho.
    printf("---------------------------------------\n");
    printf("Empresa: Bononi's Technology Company\n");
    printf("---------------------------------------\n");

    //Solicitação impressa na tela e entrada do valor do salário líquido, que está sendo armazenado na variável "salario_liquido".
    printf("Digite o salário lí­quido do colaborador:");
    scanf("%f", &salario_liquido);

    //Impressão na tela do valor do salário líquido passado pelo usuário.
    printf("-"); 
    printf("\nO salário lí­quido deste colaborador é de R$%.2f.", salario_liquido);

    //Atribuindo a porcentagem de reajuste na variável "porcentagem_reajuste", convertendo a porcentagem para múmero decimal e salvando na variavel "reajuste" e imprimindo a informação na tela.
    porcentagem_reajuste = 7.5;
    reajuste = porcentagem_reajuste/100;
    printf("\n-");
    printf("\nA porcentagem do reajuste salarial é de %.1f%%.", porcentagem_reajuste);

    //Definindo o reajuste salarial recebido pelo colaborador dependendo de seu salário líquido e atribuindo este reajuste a variável "reajuste_salario".
    reajuste_salario = salario_liquido * reajuste;
    printf("\nO reajuste salarial deste colaborador é de R$%.2f.", reajuste_salario);

    //Definindo o valor do salário reajustado sendo: o seu salário líquido + o reajuste recebido. Atribuindo este valor a variável "salario_com_reajuste".
    salario_com_reajuste = salario_liquido + reajuste_salario;
    printf("\nSeu salário, com reajuste, é de R$%.2f.", salario_com_reajuste);
    printf("\n-");

    //Atribuindo o valor do salário elegível ao abono na variável "salario_elegivel_ao_abono" e o valor do abono na variável "valor_abono".
    salario_elegivel_ao_abono = 1750;
    valor_abono = 150;
    printf("\nO abono de R$%.2f será concedido para os colaboradores que recebem o salário de até R$%.2f.", valor_abono, salario_elegivel_ao_abono);
    printf("\n-");

    //Criando uma condição de que apenas os funcionários com salário elegível ao abono, o recebrão a mais.
    if (salario_com_reajuste <= salario_elegivel_ao_abono) {

        //Imprime na tela que a condição é verdadeira.
        printf("\nSalário inferior ou igual a R$%.2f.", salario_elegivel_ao_abono);

        //Acrescenta o valor do abono no salário, assim gerando o salário final. Imprime na tela o valor do abono e o salário final deste colaborador.
        salario_final = salario_com_reajuste + valor_abono;
        printf("\nPor isso, este colaborador recebeu um abono de R$%.2f.", valor_abono);
        printf("\nSeu salário final é de R$%.2f.", salario_final);

    } else {

        //Imprime na tela que este colaborador não se encaixa na condição para receber o abono.
        printf("\nSalário superior a R$%.2f.", salario_elegivel_ao_abono);

        //Atribui o salário (superior ao salário elegível) ao salário final do colaborador.
        salario_final = salario_com_reajuste;
        printf("\nEste colaborador não recebe abono.");
        printf("\nSeu salário final é de R$%.2f.", salario_final);

    }

    return 0;
    
}