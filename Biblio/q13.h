#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#define CIMA 999
#define BAIXO 888
#define DIREITA 777
#define ESQUERDA 666
#define ENTER 555

void clearr () {
    for(int i = 0; i < 50 ; i++) printf("\n");
}


int getTecla();
int getch(void);

int getTecla() {

    char press = getch();

    // TECLA ESPECIAL
    if(press == 27) {
        press = getch(); 
        // DIRECIONAL
        if(press == 91) {      
            press = getch();
            // CIMA
            if(press == 65) return CIMA;		
            // BAIXO
            else if(press == 66) return BAIXO; 
            // DIREITA
            else if(press == 67) return DIREITA;
            // ESQUERDA
            else if(press == 68) return ESQUERDA;
        }
    }
    else if(press == '\n') {
        return ENTER;
    }
    else {
        return press;
    }
}

int getch(void) {

    struct termios oldattr, newattr;
    int ch;

    tcgetattr( STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO);
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr);

    return ch;
}