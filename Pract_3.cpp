#include<stdio.h>
#include<stdlib.h>

int main(){
float a,b,c;
char opt;
printf("a.-Suma\n b.-Resta\n c.-Multiplicacion\n d.-Divicion\n");
printf("Introduce una opcion: ");
opt=getchar();
printf("Introduce el primer operador: ");
scanf("%f",&a);
printf("Introduce el segundo operador: ");
scanf("%f",&b);

switch(opt){
  case 'A':
      case 'a':
          c=a+b;
     break;

  case 'B':
      case 'b':
     c=a-b;
     break;

  case 'C':
      case 'c':
    c=a*b;
    break;

  case 'D':
      case 'd':
    while(b==0){

    printf("Error, el segundo operador no puede ser 0\n");
    printf("Introduce el segundo operador: ");
    scanf("%f",&b);
               }
        c=a/b;
        break;
  default:
    printf("Error opcion invalida");
   opt=='R';
}
if(opt!='R'){
    printf("El resultado es: %0.2f",c);
}


}

