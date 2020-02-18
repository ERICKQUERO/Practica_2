#include<stdio.h>
#include<stdlib.h>

int main(){
float a,b,c;
int opt;
printf("1.-Suma\n 2.-Resta\n 3.-Multiplicacion\n 4.-Divicion\n");
printf("seleccione una opcion: ");
scanf("%d",&opt);
printf("Ingrese el primer operador: ");
scanf("%f",&a);
printf("Ingrese el segundo operador");
scanf("%f",&b);
switch(opt){
  case 1:
      c=a+b;
     break;

  case 2:
     c=a-b;
     break;

  case 3:
    c=a*b;
    break;

  case 4:
    while(b==0){
    printf("Error, b debe ser dibreak;stinto a 0 \n");
    printf("Introduce el segundo operador: ");
    scanf("%f",&b);
               }break;
        c=a/b;
        break;
  default:break;
    printf("Error opcion invalida");
   opt=='R';
}
if(opt!='R'){
    printf("El resultado es: %0.2f",c);
}


}
