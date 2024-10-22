#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define ENTER 13
#define BACKSPACE 8
#define ESC 27

int main(){
    int acc=0;
    int count=0;
    int may=0;
    int min=0;
    int car=0;
    int dig=0;
    int c;
    printf("\n\n\tContrase%ca:", 164);
    do{
    c=getch();
    if (c ==224 || c==0){
        getch();
        c=0;
    }
    else{
        if (c==BACKSPACE) printf("\b \b");
        if(c == ESC){
                acc++;
                break;
                }
        if(c>31){
            printf("*");
            count++;
        }
        if(c > 64 && c < 91) may = 1;
        else if (c > 96 && c < 123) min = 1;
        else if (c > 47 && c < 58) dig = 1;
        else if (c > 36 && c < 48) car = 1;
    }
    }while(c != ENTER);
    system("cls");
    if(acc == 1 ){
            printf("\nUsted salio del programa");
    }
    else{
        if(may ==1 && min ==1 && dig ==1 && car == 1 && count >= 8){
            printf("contrase%ca correcta",164);
        }
        else {
            printf("contrase%ca incorrecta\n\n",164);

            if(count < 8) printf("La contrase%ca debe contener minimo 8 caracteres alfanumericos.\n\n",164);
            if (may ==0 || min ==0 || dig ==0 || car == 0) printf("Es obligatorio tener por lo menos un simbolo de: \n");
            if(may != 1) printf("MAYUSCULA\n");
            if(min != 1) printf("minuscula\n");
            if(dig != 1) printf("Digito\n");
            if(car != 1) printf("Caracter\n");
            Sleep(8000);
            system("cls");
        }
    }
    return 0;
}
