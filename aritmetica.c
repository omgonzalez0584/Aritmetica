#include  <stdio.h>

void main(){

float  num1,num2,result;
int i;

do{
    printf("\nCALCULOS ARITMETICOS");
    printf("\n 1.Suma");
    printf("\n 2.Resta");
    printf("\n 3.Multiplicacion ");
    printf("\n 4.Division ");
    printf("\n 5.Salir ");
    printf("\n Escoja una opcion --> ");
    scanf("%d",&i);
    result = 0;
  
   switch(i){

     case 1:
         printf("\nIntroduza el primer valor: ");
         scanf("%f",&num1);
         printf("\nIntroduzca el  segundo valor: ");
         scanf("%f",&num2);
         result = num1 + num2;
         printf("\n El resultado de la suma es: %.3f ",result);
         break;

    case 2:
        printf("\nIntroduzca el primer valor:  ");
        scanf("%f",&num1);
        printf("\nIntroduzca el segundo valor: ");
        scanf("%f",&num2);
        result = num1 - num2 ;
        printf("\nEl resultado de la suma es: %.3f ",result);
        break;

    case 3:
        printf("\nIntroduzca el primer valor: ");
        scanf("%f",&num1);
        printf("\nIntroduzca el segundo  valor: ");
        scanf("%f",&num2);
        result =  num1 * num2;
        printf("\nEl resultado de la Multiplicacion es: %.3f ",result);
        break;

    case 4:
        printf("\nIntroduzca  el primer valor: ");
        scanf("%f",&num1);
        printf("\nIntroduzca el segundo valor: ");
        scanf("%f",&num2);
        result = num1 / num2;
        printf("\nEl resultado de la division es: %.3f",result);
        break;

    case 5:
           printf("\nAdios.....");
           break;

   default:
        break;
                 }
     }while(i!=5);

}



