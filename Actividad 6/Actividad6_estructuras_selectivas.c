#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <ctype.h>//libreria para convertir una variable a misuculas

/*
Equipo: #3
Integrantes:
•	Farfan de Leon Jose Osvaldo (Coach)
•	Paredes Flores Ximena Fernanda
•	Ávila Bautista Mariana Lizette
•	Neri Gutiérrez Daniel Michel
•	Gómez Valencia Juan Pablo
•	Pacheco Salinas Leonardo
Actividad: #6
Materia: Programación
Maestra: Sonia Osorio Ángel
*/

int main(){
    int calif, opc, num1, num2, num3;
    float a, b;
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
            printf("\nIntrodusca la calificacion del alumno: ");
            scanf("%d",&calif);
            switch(calif)
            {
            case 0: case 1: case 2: case 3: case 4: case 5:
                printf("\nPesimo");
                Sleep(3000);
                break;
            case 6:
                printf("\nMalo");
                Sleep(3000);
                break;
            case 7:
                printf("\nRegular");
                Sleep(3000);
                break;
            case 8: case 9:
                printf("\nBueno");
                Sleep(3000);
                break;
            case 10:
                printf("\nExcelente");
                Sleep(3000);
            break;
            }
            system("cls");
        break;
//--------------------------------------------------------------------------------------------------------------------------------------------
// 2.-Al ingresar el nombre de un mes, devolver el trimestre del año al que corresponde.
        case 2:
            printf("Ingrese un mes: \n");
            scanf("%s",&mes);//guardamos el mes
            for (int i = 0 ; mes[i] != 0 ; ++i){//esta funcion convierte cada una de las letras a minusculas para evitar poner condicione en el if de mayusculas y minusculas
                mes[i] = tolower(mes[i]);
            }
            //comparamos nuestra varaible y segun se cumpla imprime el trimestre
            //!strcmp(mes, "enero") es la forma de comparar cadenas
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
            fflush(stdin);//sirve para limpiar el bufer de basura que tenga
            scanf("%c",&c);//guardamos el caracter en la variable c
            //basandonos en la tabla ASCII y cada caracter tiene un valor comparamos
            if(c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117){//en orden en base a la tabla ascci el 65 es "a" luego e, i, o, u, A, E, I, O, U
                printf("el caracter es una vocal\n");
            }
            else{}
            //en el caso de las consonantes son mas ingrese todo el abecedario y le exclui las vocales
            if (((c>=66&&c<=90)||(c>=97&&c<=122)||(c==164)||(c==165))&&(c!=65&&c!=69&&c!=73&&c!=79&&c!=85&&c!=97&&c!=101&&c!=105&&c!=111&&c!=117)) //ñ y Ñ
            {
                printf("el caracter es una consonante\n");
            }
            else{}
            //aqui compare simplemente el numero sin ascci
            if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0')
            {

                printf("el caracter es un numero\n");
            }
            else{}
            //todo lo demas viene a ser caracteres especiales coma, signos aritmeticos y logicos, porciento etc
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
            scanf("%f",&a);
            printf("ingrese el segundo numero: ");
            scanf("%f",&b);
            printf("operadores:\nSuma\nResta\nMultiplicacion\nDivision\nPotencia\n");
            printf("ingrese un operador: ");
            scanf("%s",&ope);
            if(!strcmp(ope, "suma")){printf("%f\n",a+b);}
            if(!strcmp(ope, "resta")){printf("%f\n",a-b);}
            if(!strcmp(ope, "multiplicacion")){printf("%f\n",a*b);}
            if(!strcmp(ope, "division")){printf("%f\n",a/b);}
            if(!strcmp(ope, "potencia")){printf("%f\n",pow(a,b));}
            Sleep(3000);
            system("cls");
        break;
//------------------------------------------------------------------------------------------------------------------------------------
//5.-Diseño de una calculadora que realice la suma, resta, multiplicación, división o potencia de dos números. El usuario deberá elegir mediante el tecleo de la palabra, es decir, si quiere sumar deberá elegir tecleando la palabra “SUMA” etc.
        case 5:
            printf("\nDigite el primer numero\n");
            scanf("%d", &num1);
            printf("\nDigite el segundo numero\n");
            scanf("%d", &num2);
            printf("\nDigite el tercer numero\n");
            scanf("%d", &num3);
            if(num1<num2 && num1<num3)
            {
                if(num2<num3)
                {
               printf("\n%d", num1);
               printf("\n%d", num2);
               printf("\n%d", num3);
                }
            else{
               printf("\n%d", num1);
               printf("\n%d", num3);
               printf("\n%d", num2);
                }
            }
            if(num2<num1 && num2<num3)
            {
                if(num1<num3)
                {
               printf("\n%d", num2);
               printf("\n%d", num1);
               printf("\n%d", num3);
                }
            else{
               printf("\n%d", num2);
               printf("\n%d", num3);
               printf("\n%d", num1);
                }
            }
             if(num3<num1 && num3<num2)
            {
                if(num1<num2)
                {
               printf("\n%d", num3);
               printf("\n%d", num1);
               printf("\n%d", num2);
                }
            else{
               printf("\n%d", num3);
               printf("\n%d", num2);
               printf("\n%d", num1);
                }
            }
            Sleep(4000);
            system("cls");
        break;

//-----------------------------------------------------------------------------------------------------------------------------------
//mensaje de error
        default:
            printf("opcion invalida, Intentelo de nuevo\n");
            Sleep(3000);
            system("cls");
        }

    }while(opc != 6 );//fin del ciclo
    printf("Fin del programa\n");

    system("pause");
    return 0;
}
