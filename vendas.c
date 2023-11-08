#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"funcionarios.h"
#include"produtos.h"
#include"clientes.h"
#include"vendas.h"

// Módulo vendas

Produto produtos[100];

// Tela vendas
int tela_menu_vendas(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                         - - - - Menu Vendas - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Cadastrar Venda                                           ///\n");
  printf("///           2 - Pesquisar Venda                                           ///\n");
  printf("///           3 - Atualizar Venda                                           ///\n");
  printf("///           4 - Deletar Venda                                             ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  scanf("%d", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela vendas

// Tela cadastrar vendas
int tela_menu_cadastrar_vendas(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                         - - - - Menu Vendas - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Adicionar Produto                                         ///\n");
  printf("///           2 - Remover Produto                                           ///\n");
  printf("///           3 - Finalizar Venda (Pagamento)                               ///\n");
  printf("///           4 - Cancelar Venda                                            ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela vendas

// Tela adicionar produto venda
void tela_adicionar_produto_venda(void){
  int saida = 1;
  int i;
  // char cod[7];
  char id;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Adicionar Produto - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  printf("Digite o código: \n");
  scanf("%s", cod);
  while(saida){
    for(i = 0; i < strlen(cod); i++){
      if(!ehNum(cod[i])){
        printf("Código inválido! Digite novamente");
        scanf("%s", cod)
        saída = 1;
      }
    }
  }
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela adicionar produto venda

// Tela remover produto venda
void tela_remover_produto_venda(void){
  int saida = 1;
  int i;
  char cod[7];
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Remover Produto - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Digite o código: \n");
  scanf("%s", cod);
  while(saida){
    for(i = 0; i < strlen(cod); i++){
      if(!ehNum(cod[i])){
        printf("Código inválido! Digite novamente");
        scanf("%s", cod)
        saída = 1;
      }
    }
  }                                                                        ///\n");               
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela remover produto venda

// Tela pesquisar venda
void tela_pesquisar_vendas(void){
  int saida = 1;
  int i;
  char cod[7];
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Venda - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Digite o código: \n");
  scanf("%s", cod);
  while(saida){
    for(i = 0; i < strlen(cod); i++){
      if(!ehNum(cod[i])){
        printf("Código inválido! Digite novamente");
        scanf("%s", cod)
        saída = 1;
      }
    }
  }                                                                        ///\n");               
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar venda

// Tela deletar venda
void tela_deletar_vendas(void){
  int saida = 1;
  int i;
  char cod[7];
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Venda - - - -                        ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Digite o código: \n");
  scanf("%s", cod);
  while(saida){
    for(i = 0; i < strlen(cod); i++){
      if(!ehNum(cod[i])){
        printf("Código inválido! Digite novamente");
        scanf("%s", cod)
        saída = 1;
      }
    }
  }                                                                        ///\n");               
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_cadastrar_vendas(void){
  int saida = 1;
  int i;
  // char cod[7];
  Funcionario funcionario;
  Cliente cliente;
  Venda venda;
  int id,
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Finalizar Venda - - - -                        ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Digite o código: \n");
  scanf("%s", id);
  while(saida){
    for(i = 0; i < strlen(id); i++){
      if(!ehNum(&id[i])){
        printf("Código inválido! Digite novamente");
        scanf("%s", id)
        saída = 1;
      }
    }
  }                                                                        ///\n");               
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim módulo vendas