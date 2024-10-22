#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int can1=0, can2=0, can3=0, voto;
    char opc;
    do{
        do{
            printf("\tElecciones FEU\n\n");
            printf("1.-Candidato numero uno\n");
            printf("2.-Candidato numero dos\n");
            printf("3.-Candidato numero tres\n");
            printf("Ingrese el numero del candidato por el cual desea votar:");
            scanf("%i",&voto);
            if(voto != 1 && voto != 2 && voto != 3){
                    printf("error dato invalido, intentelo de nuevo");
                    Sleep(3000);
                    system("cls");
            }
        }while(voto != 1 && voto != 2 && voto != 3);
        if(voto == 1) can1++;
        if(voto == 2) can2++;
        if(voto == 3) can3++;
        printf("Desea ingresar otro voto presione -s- de lo contrario presione -n-:");
        fflush(stdin);
        scanf("%c",&opc);
        system("cls");
    }while(opc != 'n');
    system("cls");
    printf("Resultados:\n\n");
    printf("Candidato 1 obtuvo: %i votos\n",can1);
    printf("Candidato 2 obtuvo: %i votos\n",can2);
    printf("Candidato 3 obtuvo: %i votos\n",can3);
    if(can1>can2 && can1>can3) printf("El ganador es el candidato numero uno\n");
    if(can2>can1 && can2>can3) printf("El ganador es el candidato numero dos\n");
    if(can3>can1 && can3>can2) printf("El ganador es el candidato numero tres\n");
}
