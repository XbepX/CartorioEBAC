#include <stdio.h> // comunicação com o usuário
#include <stdlib.h> // alocação de espaço na memória
#include <locale.h> // alocação de texto por rgião
#include <string.h> // bbtk responsável por cuidar das strings

// função de registro: responsável por cadastrar os usuários
int reg() {
    char arquivo[40], cpf[40], nome[40], sobrenome [40], cargo[40]; //Início da criação de variáveis/string


    printf("Digite o CPF a ser cadastrado: "); //Exibe uma informação para o usuário
    scanf("%s", cpf); // coleta informações fornecidas pelo usuário

    strcpy(arquivo, cpf); // Responsável por copiar os valores das strings

        FILE *file; //chama a função file, e cria o arquivo file
        file = fopen(arquivo, "w"); // cria o arquivo
        fprintf(file, "CPF: "); //
        fprintf(file, cpf); // salva o valor da variável no arquivo
        fclose(file); //fecha o arquivo

        file = fopen(arquivo, "a"); // quero atualizar as informações "a"
        fprintf(file, "\n");
        fclose(file); //fecha o arquivo

    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);


            file = fopen(arquivo, "a"); // atualiza
            fprintf(file, "NOME: ");
            fprintf(file, nome); // salva o valor da variável no arquivo
            fclose(file); //fecha o arquivo

            file = fopen(arquivo, "a"); // quero atualizar as informações "a"
            fprintf(file, "\n"); //cria uma separação por vírgula
            fclose(file); //fecha o arquivo


    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);


            file = fopen(arquivo, "a"); // atualiza
            fprintf(file, "SOBRENOME: ");
            fprintf(file, sobrenome); // salva o valor da variável no arquivo
            fclose(file); //fecha o arquivo

            file = fopen(arquivo, "a"); // quero atualizar as informações "a"
            fprintf(file, "\n");
            fclose(file); //fecha o arquivo

    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);


            file = fopen(arquivo, "a"); // atualiza
            fprintf(file, "CARGO: ");
            fprintf(file, cargo); // salva o valor da variável no arquivo
            fclose(file); //fecha o arquivo

            file = fopen(arquivo, "a"); // quero atualizar as informações "a"
            fprintf(file, "\n");
            fclose(file); //fecha o arquivo

system("pause");

}


//função de consultar
int cons() {

    setlocale(LC_ALL, "Portuguese_Brazil");



    char cpf[40];
    char conteudo[200];

    printf("Digite o cpf a ser consultado: ");
    scanf("%s", cpf);

    FILE *file;
    file = fopen(cpf, "r"); //abre o arquivo e ler(read) o dado cpf

    if (file == NULL) {
        printf("\nNão foi possível abrir o arquivo, CPF não localizado!\n");
     }

        while(fgets(conteudo, 200, file)!= NULL) { //enquanto fgets busca no arquivo o conteudo, que o tamanho máximo é 200, enquanto ele tiver dentro do arquivo, e só vai parar quando for nulo.

            printf("\n\t");
            printf("%s", conteudo);
            printf("\t");
    }

    printf("\n\n");
    system("pause");
}


//função de deletar
int del() {

    setlocale(LC_ALL, "");

    char cpf[40];

    printf("Digite o CPF para exclusão de dados: ");
    scanf("%s", cpf);

    remove(cpf);

    FILE *file;
    file = fopen(cpf, "r");


    if(file == NULL) {

        printf("\n\nOs dados foram apagados com sucesso!. \n\n");


        system("pause");
    }



}

// função primária (principal)
int main ()
{
    int opcao=0;
    int laco=1;

    for(laco=1;laco=1;)
    {
        setlocale(LC_ALL, "Portuguese_Brazil");

            printf("					++++++++++++++++++++\n");
            printf("					+                  +\n");
            printf("					+ Cartório da EBAC +\n");
            printf("					+                  +\n");
            printf("					++++++++++++++++++++\n\n");
            printf("\t1 - Registrar nomes\n");
            printf("\t2 - Consultar nomes\n");
            printf("\t3 - Deletar nomes\n\n");
            printf("Opção: "); // fim do menu

            scanf("%d", &opcao); // armazene na variável opcao o valor que o usuário digitar

        system("cls"); // limpa o terminal

//Início da seleção

		switch (opcao) { // inicio da seleção

			case 1:
            	reg(); // chamada da função
        	break;

			case 2:
    			cons();
        	break;

			case 3:
            	del();
        	break;

			default:        //caso o usuário digite um valor não mapeado
            	printf("Esta opção não está disponível!\n"); //exibe esta mensagem
            	system("pause");
            break;
					}

	}

}
