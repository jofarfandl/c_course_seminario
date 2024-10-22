/*Equipo 3:
�	Farfan de Leon Jose Osvaldo (Coach)
*/
//------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int op1, op2, op3;
int main(){
    do{
        printf("\nLista de peliculas                                   EQUIPO 3\n");
        printf("1.-Accion\n");
        printf("2.-Infantiles\n");
        printf("3.-Otras\n");
        printf("presione 4 para salir\n");
        printf("ingrese una opcion valida: ");
        scanf("%i",&op1);
        system("cls");
        switch(op1){

        case 1:
            printf("1.-Hombre\n");
            printf("2.-Mujer\n");
            printf("3.-Otro\n");
            printf("ingrese una opcion valida: ");
            scanf("%i",&op2);
            system("cls");
            switch(op2){
            case 1:
                printf("1.-Dwayne Johnson\n");
                printf("2.-jason statham\n");
                printf("3.-keanu reeves\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("peliculas:\nTerremoto\nFast and Fury\nRascacielos\nRampage\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 2:
                    printf("peliculas:\nEl transportador\nCrank\nEl mecanico\nLos indestructibles\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 3:
                    printf("peliculas:\nMatrix\nJohn Wick\nPoint break\nConstantine\n");
                    Sleep(5000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido\n");
                    Sleep(3000);
                    system("cls");
                }
            break;
            case 2:
                printf("1.-Scarlette Johanson\n");
                printf("2.-Milla Jovovich\n");
                printf("3.-Gael gadot\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("Peliculas:\nAvengers\nGost in the shell\nLucy\La isla\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\nResident evil\nEl quinto elemento\nHellboy\nUltravioleta\Survivor\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas:\nRapido y Furiosos\nMujer maravilla\nEspiando a los vecinos\nTriple nueve\n");
                    Sleep(5000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido\n");
                    Sleep(3000);
                    system("cls");
                }
            break;
            case 3:
                printf("1.-Animacion\n");
                printf("2.-Alien\n");
                printf("3.-Monstruo\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("Peliculas:\nToy story\nBichos\nCars\nLos increibles");
                    Sleep(5000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\nWall-e\nAliens contra mounstros\nZatura\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas;\nShreck\nMonster inc\n");
                    Sleep(5000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido\n");
                    Sleep(3000);
                    system("cls");
                }
            break;

            default:
                printf("Dato invalido, intentelo de nuevo\n");
            }
        break;

        case 2:
            printf("1.-Dreamworks\n");
            printf("2.-Walt Disney\n");
            printf("3.-Pixar\n");
            printf("presione 4 para salir");
            printf("ingrese una opcion valida: ");
            scanf("%i",&op2);
            system("cls");
            switch(op2){
            case 1:
                printf("1.-Humanos\n");
                printf("2.-Animales\n");
                printf("3.-Otros\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                switch(op3){
                case 1:
                    printf("Peliculas:\nEl dorado\nEl principe de egypto\nSinbad\Como entrenar a tu dragon\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\nMadagascar\nSpirit\Bee movie\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas:\nShrek\nThe cat\nTransformers\n");
                    Sleep(5000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido");
                    Sleep(3000);
                    system("cls");
                }
            break;
            case 2:
                printf("1.-Princesas\n");
                printf("2.-Animales\n");
                printf("3.-otros\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("Peliculas:\nLa sirenita\nCenicienta\nLa bella y la bestia\n\Blanca nieves\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\Rey leon\n101 dalmatas\nLa dama y el vagabundo\nBambi\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas:\nLilo y stich\nPiratas del Caribe\nTarzan\nTron\n");
                    Sleep(5000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido");
                    Sleep(3000);
                    system("cls");
                }
            break;
            case 3:
                printf("1.-Aventura\n");
                printf("2.-Animales\n");
                printf("3.-Otros\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("Peliculas:\nCoco\nUp\nWall-e\nToy Story\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\nRatatouille\nBuscando a Nemo\nBichos\nUn gran dinosaurio\n");
                    Sleep(5000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas:\nCars\nMonster inc\nIntensamente\Los increibles\n");
                    Sleep(5000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido");
                    Sleep(3000);
                    system("cls");
                }
            break;
            case 4:
                break;
            default:
                printf("Dato invalido, intentelo de nuevo");
                Sleep(3000);
                system("cls");
            }
        break;


        case 3:
            printf("1.-Drama\n");
            printf("2.-Romance\n");
            printf("3.-comedia\n");
            printf("ingrese una opcion valida: ");
            scanf("%i",&op2);
            system("cls");
            switch(op2){
            case 1:
                printf("1.-Nominadas\n");
                printf("2.-Basadas en historias reales\n");
                printf("3.-otras\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("Peliculas:\nParasitos\nEl renacido\nBirdman\nRoma\n");
                    Sleep(3000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\nMCfarland\nIntouchables\nFord vs Ferrary\La teoria del todo\n");
                    Sleep(3000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas;\nInterestellar\nUna mente indomable\nEl ultimo regalo\nLa historia de los poetas muesrtos\n");
                    Sleep(3000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido");
                    Sleep(3000);
                    system("cls");
                }
            break;
            case 2:
                printf("1.-Amor de Ni�os\n");
                printf("2.-Amor Adolecente\n");
                printf("3.-Amor para siempre :v\n\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("Peliculas:\nABC de amor\nMi primer beso\nmi primer amor\n");
                    Sleep(3000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\nBajo la misma estrella\nla primera vez\n10 cosas que odio de ti\n");
                    Sleep(3000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas:\nOrgullo y prejuicio\n The notebook\nyo antes de ti\n");
                    Sleep(3000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido");
                    Sleep(3000);
                    system("cls");
                }
            break;
            case 3:
                printf("1.-Adam Sandler\n");
                printf("2.-Jonah Hill\n");
                printf("3.-jim carrey\n");
                printf("ingrese una opcion valida: ");
                scanf("%i",&op3);
                system("cls");
                switch(op3){
                case 1:
                    printf("Peliculas:\nSon como ni�os\nZohan\nClick\nPixels\n");
                    Sleep(3000);
                    system("cls");
                break;
                case 2:
                    printf("Peliculas:\nSupercool\nAmigos de armas\nRockstar\nAceptados\n");
                    Sleep(3000);
                    system("cls");
                break;
                case 3:
                    printf("Peliculas:\nLa mascara\nEl grinch\nEl todopoderoso\nSonic\n");
                    Sleep(3000);
                    system("cls");
                break;
                default:
                    printf("Error, dato invalido");
                }
            break;
            case 4:
                break;
            default:
                printf("Dato invalido, intentelo de nuevo\n");
                Sleep(3000);
                system("cls");
            }
        break;


        case 4:
                printf("Usted salio del programa\n");
        break;

        default:
            printf("Dato invalido, intentelo de nuevo\n");
            Sleep(3000);
            system("cls");
        }
    }while(op1 != 4);
    return 0;
}
