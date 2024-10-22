#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jugador1[30];
    int jugada1;
    char jugador2 [30];
    int jugada2;
    int piedra=1;
    int papel=2;
    int tijeras=3;
    printf("jugador 1 di tu nombre\n");
    scanf("%s",&jugador1);
    printf("jugador 2 di tu nombre\n");
    scanf("%s",&jugador2);
    do{
    printf("%s que haras 1) piedra 2)papel 3)tijeras 4)salir\n ",jugador1);
    scanf("%d",&jugada1);
    system("cls");
    printf("%s que haras 1) piedra 2)papel 3)tijeras 4)salir\n ",jugador2);
    scanf("%d",&jugada2);
    if ((jugada1 == 1)&&(jugada2==1)){
        printf("Empate ambos con piedra\n");}
    if ((jugada1 == 1)&&(jugada2==2)){
        printf("Gana %s con papel\n",jugador2);}
    if ((jugada1 == 1)&&(jugada2==3)){
        printf("Gana %s con piedra\n",jugador1);
    }
    if ((jugada1 == 2)&&(jugada2==2)){
        printf("Empate ambos con papel\n");}
    if ((jugada1 == 2)&&(jugada2==1)){
        printf("Gana %s con papel\n",jugador1);}
    if ((jugada1 == 2)&&(jugada2==3)){
        printf("Gana %s con tijeras\n",jugador2);
    }
        if ((jugada1 == 3)&&(jugada2==3)){
        printf("Empate ambos con tijeras\n");}
    if ((jugada1 == 3)&&(jugada2==2)){
        printf("Gana %s con tijeras\n",jugador1);}
    if ((jugada1 == 3)&&(jugada2==1)){
        printf("Gana %s con piedra\n",jugador2);
    }
    }while((jugada1!=4)&&(jugada2!=4));
    return 0;
}
