#include <stdio.h>

int main() {

  int jr, fim;
  char a, b, c, d, e, f, g, h, i, ja;

  a = b = c = d = e = f = g = h = i = ' ';
  fim = 0;
  jr = 1;

  while ( fim == 0 ) {

    system("clear");
    printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
    printf ("\n🧱🧱🧱🧱🧱🧱  JOGO DA VELHA 🧱🧱🧱🧱🧱🧱");	
    printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
    printf ("\n");   
    printf ("\n                a🧱 b🧱 c");      
    printf ("\n               🧱🧱🧱🧱🧱   ");            
    printf ("\n                d🧱 e🧱 f");                
    printf ("\n               🧱🧱🧱🧱🧱   ");             
    printf ("\n                g🧱 h🧱 i");              
    printf ("\n");



    printf ("\n               ");
    if ( a == '0' ) printf ("🔴🧱");
    else if ( a == 'X' ) printf ("⚪🧱");
    else printf ("  🧱");

    if ( b == '0' ) printf ("🔴🧱");
    else if ( b == 'X' ) printf ("⚪🧱");
    else printf ("  🧱");

    if ( c == '0' ) printf ("🔴");
    else if ( c == 'X' ) printf ("⚪");
    else printf ("  ");



    printf ("\n               🧱🧱🧱🧱🧱");



    printf ("\n               ");
    if ( d == '0' ) printf ("🔴🧱");
    else if ( d == 'X' ) printf ("⚪🧱");
    else printf ("  🧱");

    if ( e == '0' ) printf ("🔴🧱");
    else if ( e == 'X' ) printf ("⚪🧱");
    else printf ("  🧱");

    if ( f == '0' ) printf ("🔴");
    else if ( f == 'X' ) printf ("⚪");
    else printf ("  ");



    printf ("\n               🧱🧱🧱🧱🧱");



    printf ("\n               ");
    if ( g == '0' ) printf ("🔴🧱");
    else if ( g == 'X' ) printf ("⚪🧱");
    else printf ("  🧱");

    if ( h == '0' ) printf ("🔴🧱");
    else if ( h == 'X' ) printf ("⚪🧱");
    else printf ("  🧱");

    if ( i == '0' ) printf ("🔴");
    else if ( i == 'X' ) printf ("⚪");
    else printf ("  ");



    printf ("\n\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
    printf ("\n Jogador 01-> [🔴]    Jogador 02-> [⚪]");
    printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");

    if ( a == b && a == c && a != ' ' ) {

      if ( a == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( a == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( d == e && d == f && d != ' ' ) {

      if ( d == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( d == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( g == h && g == i && g != ' ' ) {

      if ( g == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( g == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( a == d && a == g && a != ' ' ) {

      if ( a == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( a == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( b == e && b == h && b != ' ' ) {

      if ( b == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( b == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( c == f && c == i && c != ' ' ) {

      if ( c == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( c == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( a == e && a == i && a != ' ' ) {

      if ( a == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( a == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( c == e && c == g && c != ' ' ) {

      if ( c == '0' ) {
        printf("\nJogador 1 venceu!");
        fim = 1;
      }
      else if ( c == 'X' ) {
        printf("\nJogador 2 venceu!");
        fim = 1;
      }

    }

    else if ( a != ' ' && b != ' ' && c != ' ' && d != ' ' && e != ' ' && f != ' ' && g != ' ' && h != ' ' && i != ' ') {

      printf("\nVelha!");
      fim = 1;
    }

    if ( fim == 0 ) {

    printf ("\nJogador %i > ", jr );
    scanf ("%c", &ja );

    }

    if ( ja == 'a' && a == ' ' ) {

      if ( jr == 1 ) a = '0';
      else a = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'b' && b == ' ' ) {

      if ( jr == 1 ) b = '0';
      else b = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'c' && c == ' ' ) {

      if ( jr == 1 ) c = '0';
      else c = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'd' && d == ' ' ) {

      if ( jr == 1 ) d = '0';
      else d = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'e' && e == ' ' ) {

      if ( jr == 1 ) e = '0';
      else e = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'f' && f == ' ' ) {

      if ( jr == 1 ) f = '0';
      else f = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'g' && g == ' ' ) {

      if ( jr == 1 ) g = '0';
      else g = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'h' && h == ' ' ) {

      if ( jr == 1 ) h = '0';
      else h = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

    else if ( ja == 'i' && i == ' ' ) {

      if ( jr == 1 ) i = '0';
      else i = 'X';

      if ( jr == 1 ) jr = 2;
      else jr = 1;

    }

  }

  return 0;

}