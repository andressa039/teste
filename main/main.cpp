#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "header.h"
#include "funcao.cpp"

int main(){

   setlocale(LC_ALL,"");

   int op;

   do{
        printf("ESCOLHA:\n");
        printf ("(1)Questionário\n");
        printf ("(2)Ler avaliações anteriores\n");
        scanf ("%d",&op);
        system("cls");

        switch(op){
        default:
            printf("erro");
        break;
        case 1:
            questionario();
            break;
        case 2:
            leitura();
            break;
        }


system("pause");
system("cls");
}while(op != 0);

   return(0);
}
