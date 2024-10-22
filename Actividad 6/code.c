#include <stdio.h>
#include <stdlib.h>

char c;

int main(){
    printf("Ingrese un caracter:");
    scanf("%c",&c);
    if(c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117){
        printf("el caracter es una vocal\n");
    }
    else{}
    if (((c>=65&&c<=90)||(c>=97&&c<=122)||(c==164)||(c==165))&&(c!=65&&c!=69&&c!=73&&c!=79&&c!=85&&c!=97&&c!=101&&c!=105&&c!=111&&c!=117)) //ñ y Ñ
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
}
