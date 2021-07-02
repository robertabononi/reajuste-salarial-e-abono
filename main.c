#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis.
    float salario_liquido, porcentagem_reajuste, reajuste, reajuste_salario, salario_com_reajuste, valor_abono, salario_elegivel_ao_abono, salario_final;

    //Cabe�alho.
    printf("---------------------------------------\n");
    printf("Empresa: Bononi's Technology Company\n");
    printf("---------------------------------------\n");

    //Solicita��o impressa na tela e entrada do valor do sal�rio l�quido, que est� sendo armazenado na vari�vel "salario_liquido".
    printf("Digite o sal�rio l�quido do colaborador:");
    scanf("%f", &salario_liquido);

    //Impress�o na tela do valor do sal�rio l�quido passado pelo usu�rio.
    printf("-"); 
    printf("\nO sal�rio l�quido deste colaborador � de R$%.2f.", salario_liquido);

    //Atribuindo a porcentagem de reajuste na vari�vel "porcentagem_reajuste", convertendo a porcentagem para m�mero decimal e salvando na variavel "reajuste" e imprimindo a informa��o na tela.
    porcentagem_reajuste = 7.5;
    reajuste = porcentagem_reajuste/100;
    printf("\n-");
    printf("\nA porcentagem do reajuste salarial � de %.1f%%.", porcentagem_reajuste);

    //Definindo o reajuste salarial recebido pelo colaborador dependendo de seu sal�rio l�quido e atribuindo este reajuste a vari�vel "reajuste_salario".
    reajuste_salario = salario_liquido * reajuste;
    printf("\nO reajuste salarial deste colaborador � de R$%.2f.", reajuste_salario);

    //Definindo o valor do sal�rio reajustado sendo: o seu sal�rio l�quido + o reajuste recebido. Atribuindo este valor a vari�vel "salario_com_reajuste".
    salario_com_reajuste = salario_liquido + reajuste_salario;
    printf("\nSeu sal�rio, com reajuste, � de R$%.2f.", salario_com_reajuste);
    printf("\n-");

    //Atribuindo o valor do sal�rio eleg�vel ao abono na vari�vel "salario_elegivel_ao_abono" e o valor do abono na vari�vel "valor_abono".
    salario_elegivel_ao_abono = 1750;
    valor_abono = 150;
    printf("\nO abono de R$%.2f ser� concedido para os colaboradores que recebem o sal�rio de at� R$%.2f.", valor_abono, salario_elegivel_ao_abono);
    printf("\n-");

    //Criando uma condi��o de que apenas os funcion�rios com sal�rio eleg�vel ao abono, o recebr�o a mais.
    if (salario_com_reajuste <= salario_elegivel_ao_abono) {

        //Imprime na tela que a condi��o � verdadeira.
        printf("\nSal�rio inferior ou igual a R$%.2f.", salario_elegivel_ao_abono);

        //Acrescenta o valor do abono no sal�rio, assim gerando o sal�rio final. Imprime na tela o valor do abono e o sal�rio final deste colaborador.
        salario_final = salario_com_reajuste + valor_abono;
        printf("\nPor isso, este colaborador recebeu um abono de R$%.2f.", valor_abono);
        printf("\nSeu sal�rio final � de R$%.2f.", salario_final);

    } else {

        //Imprime na tela que este colaborador n�o se encaixa na condi��o para receber o abono.
        printf("\nSal�rio superior a R$%.2f.", salario_elegivel_ao_abono);

        //Atribui o sal�rio (superior ao sal�rio eleg�vel) ao sal�rio final do colaborador.
        salario_final = salario_com_reajuste;
        printf("\nEste colaborador n�o recebe abono.");
        printf("\nSeu sal�rio final � de R$%.2f.", salario_final);

    }

    return 0;
    
}