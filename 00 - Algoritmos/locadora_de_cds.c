#include <stdio.h>
#include <stdlib.h>

float azul ();
float verde ();
float laranja ();
float vermelho ();

int main() {

  int cd, cd1[4], totalcd = 0;
  float total = 0, preco = 0;
  char percent = '%';

  cd1[0] = 0;
  cd1[1] = 0;
  cd1[2] = 0;
  cd1[3] = 0;

  while(1){

    cd = -1;

    system("clear");
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    printf("🎴🎴  🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮  🎴🎴\n");
    printf("🎴🎴     LOCADORA  DE  CD'S     🎴🎴\n");
    printf("🎴🎴🎍                        🎍🎴🎴\n");
    printf("🎴🎴🎴🎴💿💿💿💿💿💿💿💿💿💿🎴🎴🎴🎴\n");
    printf("\n");
    printf("🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄\n");
    printf("🀄🀄                            🀄🀄\n");
    printf("🀄🀄     TABELA  DE  PREÇOS     🀄🀄\n");
    printf("🀄🀄                            🀄🀄\n");
    printf("🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄\n");
    printf("🀄🀄                            🀄🀄\n");
    printf("🀄🀄  🟦💽 Azul     👉 1 R$10.00🀄🀄\n");
    printf("🀄🀄  🟩💽 Verde    👉 2 R$15.00🀄🀄\n");
    printf("🀄🀄  🟧💽 Laranja  👉 3 R$20.00🀄🀄\n");
    printf("🀄🀄  🟥💽 Vermelho 👉 4 R$25.00🀄🀄\n");
    printf("🀄🀄  ⬜⬛ Reiniciar👉 5        🀄🀄\n");
    printf("🀄🀄  ⬜⬛ Sair     👉 0        🀄🀄\n");
    printf("🀄🀄                            🀄🀄\n");
    printf("🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄🀄\n");
    if ( totalcd > 0) {
      printf("  Valor total: R$%.2f\n", total);
      printf("  Quantidade de CD's alugados: %i\n", totalcd);
    }
    else printf("\n\n");
    printf("      🎏🎏          👉 ");
    scanf("%i", &cd );

    if( cd == 5 ) {
      total = 0; 
      totalcd = 0;
      cd1[0] = 0;
      cd1[1] = 0;
      cd1[2] = 0;
      cd1[3] = 0;
    }

    else if( cd == 0 ) break;

    else if( cd == 1 ) {

      if( cd1[0] == 0 ) {
        preco = azul();

        if ( preco != 0 ) {
          totalcd++;
          total = total + preco;
          cd1[0] = 1;
        }
      }
      else if( cd1[0] == 1 ) printf("  CD já alugado!\n");
    }

    else if( cd == 2 ) {

      if( cd1[1] == 0 ) {
        preco = verde();

        if ( preco != 0 ) {
          totalcd++;
          total = total + preco;
          cd1[1] = 1;
        }
      }
      else if( cd1[1] == 1 ) printf("  CD já alugado!\n");
    }

    else if( cd == 3 ) {

      if( cd1[2] == 0 ) {
        preco = laranja();

        if ( preco != 0 ) {
          totalcd++;
          total = total + preco;
          cd1[2] = 1;
        }
      }
      else if( cd1[2] == 1 ) printf("  CD já alugado!\n");
    }

    else if( cd == 4 ) {

      if( cd1[3] == 0 ) {
        preco = vermelho();

        if ( preco != 0 ) {
          totalcd++;
          total = total + preco;
          cd1[3] = 1;
        }
      }
      else if( cd1[3] == 1 ) printf("  CD já alugado!\n");
    }

    else printf("  CD inexistente!\n");

    sleep (1);
  }

  system("clear");

  if( totalcd == 0 ) {
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    printf("🎴🎴  🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮  🎴🎴\n");
    printf("🎴🎴   Nenhum CD foi alugado!   🎴🎴\n");
    printf("🎴🎴🎍                        🎍🎴🎴\n");
    printf("🎴🎴🎴🎴💿💿💿💿💿💿💿💿💿💿🎴🎴🎴🎴\n");    
  }
  else {
    printf("🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
    printf("🎴🎴  🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮  🎴🎴\n");
    printf("🎴🎴    Total de CD's:%i         🎴🎴\n", totalcd );
    if( total < 100 ) printf("🎴🎴🎍  Preço total: R$%.2f  🎍🎴🎴\n", total );
    else if( total < 1000 ) printf("🎴🎴🎍  Preço total: R$%.2f 🎍🎴🎴\n", total );
    else printf("🎴🎴🎍  Preço total: R$%.2f🎍🎴🎴\n", total );
    printf("🎴🎴🎴🎴💿💿💿💿💿💿💿💿💿💿🎴🎴🎴🎴\n");
  }

  return 0;

}

float azul ( ) {

  int dias;
  float preco = 0;
  char percent = '%';


  printf("\n🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
  printf("🎴🎴  🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮  🎴🎴\n");
  printf("🎴🎴  Preço por dia: R$10.00    🎴🎴\n");
  printf("🎴🎴   Caso alugue esse CD por  🎴🎴\n");
  printf("🎴🎴  mais de 5 dias, recebe 5%c 🎴🎴\n", percent);
  printf("🎴🎴  de desconto, caso alugue  🎴🎴\n");
  printf("🎴🎴   por mais de 15, recebe   🎴🎴\n");
  printf("🎴🎴🎍    10%c de desconto     🎍🎴🎴\n", percent);
  printf("🎴🎴🎴🎴💿💿💿💿💿💿💿💿💿💿🎴🎴🎴🎴\n");
  printf("      🎏🎏Qt de dias👉 ");
  scanf("%i", &dias );
  if( dias <= 10 ) preco = dias*10;
  else if( dias > 10 && dias <= 15 ) preco = (dias*10)*0.95;
  else if( dias > 15 ) preco = (dias*10)*0.9;

  return preco;

}

float verde () {

  int dias;
  float preco = 0;
  char percent = '%';

  printf("\n🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
  printf("🎴🎴  🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮  🎴🎴\n");
  printf("🎴🎴  Preço por dia: R$15.00    🎴🎴\n");
  printf("🎴🎴  Tempo máximo de locação:  🎴🎴\n");
  printf("🎴🎴🎍        10 dias         🎍🎴🎴\n");
  printf("🎴🎴🎴🎴💿💿💿💿💿💿💿💿💿💿🎴🎴🎴🎴\n");
  printf("      🎏🎏Qt de dias👉 ");
  scanf("%i", &dias );

  if( dias > 10 ) printf("  Não é possível alugar!\n");
  else preco = dias*15;

  return preco;

}

float laranja () {

  int dias;
  float preco = 0;
  char percent = '%';

  printf("\n🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
  printf("🎴🎴  🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮  🎴🎴\n");
  printf("🎴🎴  Preço por dia: R$20.00    🎴🎴\n");
  printf("🎴🎴   Caso alugue por mais de  🎴🎴\n");
  printf("🎴🎴  10 dias, será cobrado um  🎴🎴\n");
  printf("🎴🎴🎍adicional de 10%c por dia🎍🎴🎴\n", percent);
  printf("🎴🎴🎴🎴💿💿💿💿💿💿💿💿💿💿🎴🎴🎴🎴\n");
  printf("      🎏🎏Qt de dias👉 ");
  scanf("%i", &dias );

  if( dias > 10 ) preco = dias*20*1.1;
  else preco = dias*20;

  return preco;

}

float vermelho () {

  int dias;
  float preco = 0;
  char percent = '%';

  printf("\n🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴🎴\n");
  printf("🎴🎴  🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮🏮  🎴🎴\n");
  printf("🎴🎴  Preço por dia: R$25.00    🎴🎴\n");
  printf("🎴🎴   Caso alugue por mais de  🎴🎴\n");
  printf("🎴🎴   10 dias recebe 30%c de    🎴🎴\n", percent);
  printf("🎴🎴    desconto em cada dia    🎴🎴\n");
  printf("🎴🎴🎍        adicional       🎍🎴🎴\n");
  printf("🎴🎴🎴🎴💿💿💿💿💿💿💿💿💿💿🎴🎴🎴🎴\n");
  printf("      🎏🎏Qt de dias👉 ");
  scanf("%i", &dias );

  if( dias > 10 ) preco = 250 + ( dias - 10 )*25*0.7;
  else preco = dias*25;

  return preco;

}