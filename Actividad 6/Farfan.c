#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>//libreria para comparar cadenas(string)
#include <math.h>//libreria para potencias
#include <ctype.h>//libreria para convertir una variable a misuculas



int main(){
    int cal, opc, x, y, z, aux;
    float num1, num2;
    char mes[10], ope[20], c;
    do{

        printf("                      MENU\n");
        printf("1.-Algoritmo para mostrar el tipo de calificacion\n");
        printf("2.-Imprimir el trimestre en el cual nacio\n");
        printf("3.-Tipo de caracter\n");
        printf("4.-Calculadora\n");
        printf("5.-Ordenar numeros de forma ascendente\n");
        printf("    Presione ->6<- para salir       \n");
        printf("Ingrese una opcion: ");
        scanf("%i",&opc);
        system("cls");

        switch(opc){
//-----------------------------------------------------------------------------------------------------------------------
// 1.-Algoritmo que reciba la calificación de un alumno e imprima el tipo al que corresponde: (0-5) Pésimo, (6) Malo, (7) Regular, (8-9) Bueno y (10) Excelente.
        case 1:
            printf("Tipo de calificacion\n");
            printf("Ingrese la calificacion del 1 al 10:");
            scanf("%i",&cal);
            if(cal >= 0 && cal <= 5) printf("Pesimo\n");
            if(cal == 6) printf("Malo\n");
            if(cal == 7) printf("Regular\n");
            if(cal == 8 || cal == 9 )printf("Bueno\n");
            if(cal == 10 ) printf("Excelente\n");
            if(cal >10 || cal < 0) printf("Calificacion fuera de rango");
            Sleep(3000);
            system("cls");
        break;
//--------------------------------------------------------------------------------------------------------------------------------------------
// 2.-Al ingresar el nombre de un mes, devolver el trimestre del año al que corresponde.
        case 2:
            printf("Ingrese un mes: \n");
            scanf("%s",&mes);
            for (int i = 0 ; mes[i] != 0 ; ++i){
                mes[i] = tolower(mes[i]);
            }
            if(!strcmp(mes, "enero") || !strcmp(mes, "febrero") || !strcmp(mes, "marzo") ) {printf("Primer trimestre\n");}
            if(!strcmp(mes, "abril") || !strcmp(mes, "mayo") || !strcmp(mes, "junio") ) {printf("Segundo trimestre\n");}
            if(!strcmp(mes, "julio") || !strcmp(mes, "agosto") || !strcmp(mes, "septiembre") ) {printf("Tercer trimestre\n");}
            if(!strcmp(mes, "octubre") || !strcmp(mes, "noviembre") || !strcmp(mes, "diciembre") ) {printf("Cuarto trimestre\n");}

            Sleep(3000);
            system("cls");
        break;

//------------------------------------------------------------------------------------------------------------------------------------
// 3.-Algoritmo que reciba un carácter e imprima si se trata de una vocal, consonante, número o carácter especial.
        case 3:
            printf("Ingrese un caracter: \n");
            fflush(stdin);
            scanf("%c",&c);
            if(c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117){
                printf("el caracter es una vocal\n");
            }
            else{}
            if (((c>=66&&c<=90)||(c>=97&&c<=122)||(c==164)||(c==165))&&(c!=65&&c!=69&&c!=73&&c!=79&&c!=85&&c!=97&&c!=101&&c!=105&&c!=111&&c!=117)) //ñ y Ñ
            {
                printf("el caracter es una consonante\n");
            }
            else{}
            if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0')
            {

                printf("el caracter es un numero\n");
            }
            else{}
            if ((c <=64||(c>=91&&c<=96)||c>=193)&&(c<=47||c>=58))
            {
                printf("el caracter es especial\n");
            }
            else{}
            Sleep(3000);
            system("cls");
        break;

//--------------------------------------------------------------------------------------------------------------------------------------
        case 4:
            printf("ingrese el primer numero: ");
            scanf("%f",&num1);
            printf("ingrese el segundo numero: ");
            scanf("%f",&num2);
            printf("operadores:\nSuma\nResta\nMultiplicacion\nDivision\nPotencia\n");
            printf("ingrese un operador: ");
            scanf("%s",&ope);
            if(!strcmp(ope, "suma")){printf("%f\n",num1+num2);}
            if(!strcmp(ope, "resta")){printf("%f\n",num1-num2);}
            if(!strcmp(ope, "multiplicacion")){printf("%f\n",num1*num2);}
            if(!strcmp(ope, "division")){printf("%f\n",num1/num2);}
            if(!strcmp(ope, "potencia")){printf("%f\n",pow(num1,num2));}
            Sleep(3000);
            system("cls");
        break;
//------------------------------------------------------------------------------------------------------------------------------------
//5.-Diseño de una calculadora que realice la suma, resta, multiplicación, división o potencia de dos números. El usuario deberá elegir mediante el tecleo de la palabra, es decir, si quiere sumar deberá elegir tecleando la palabra “SUMA” etc.
        case 5:
            printf("Ingrese el primer numero: ");
            scanf("%i",&x);
            printf("Ingrese el segundo numero: ");
            scanf("%i",&aux);
            if( x>aux) y=aux;
            else{
                y=x;
                x=aux;
            }
            printf("ingrese el tercer numero: ");
            scanf("%i",&aux);
            if( y>aux )z=aux;
            else{
                if(x<aux){
                    z=y;
                    y=x;
                    x=aux;
                }
                else{
                    z=y;
                    y=aux;
                }
            }
            printf("orden ascendente:\n");
            printf("%i\n%i\n%i\n",z,y,x);
            Sleep(4000);
            system("cls");
        break;

        case 6:
            printf("El programa finalizara\n");
            Sleep(3000);
            system("cls");
        break;

        default:
            printf("opcion invalida, Intentelo de nuevo\n");
            Sleep(3000);
            system("cls");
        }

    }while(opc != 6 );
    printf("Fin del programa\n");

    system("pause");
    return 0;
}
