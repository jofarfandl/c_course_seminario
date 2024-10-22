#include <stdio.h>
#include <stdlib.h>
#define ENTER 13
#define BACKSPACE 8

int main(){
    int c;
    printf("\n\n\tCURP:");
    do{
    c=getch();
    if (c ==224 || c==0){
        getch();
        c=0;
    }
    else{
        if (c==BACKSPACE) printf("\b \b");
        if(c>31){
            printf("*");
        }
        else{
            printf("\a");
        }


    }
    }while(c != ENTER);
    /*
    4 letras
    6 digitos
    6 letras
    1 letra o digito
    1 digito
            printf("%i %c\n",c,c);
        if( c<32) {
            printf("caracter de control\n");
        }else if(c >= '0' && c <= '9'){
            printf("el caracter es un digito\n");
        }else if(c >= 'A' && c <= 'Z'){
            printf("el caracter es MAYUSCULA\n");
        }else if(c >= 'a' && c <= 'z'){
             printf("el caracter es minuscula\n");
        }else{
            printf("el caracter es especial\n");
        }*/
}
