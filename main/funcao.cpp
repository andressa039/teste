#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void questionario(){

    struct questionario{
        int op1, alt, nota, op;
        char avaliador[100], entrevistador[100];
    };

    struct questionario q;

    q.nota=0;

            printf("Deseja responder o questionario? \n");
            printf ("(1)SIM      (2)NÃO \n\n");
            scanf ("%d",&q.op1);
            system("cls");
            if(q.op1==1){
                 printf ("Digite o nome do avaliador:\n ");
                   scanf("%s",q.avaliador);


                   printf ("Digite o nome do entrevistador:\n ");
                   scanf("%s",q.entrevistador);
                   system("cls");


                printf ("Tempo de atendimento\n");
                printf("(1)RUIM\n");
                printf("(2)REGULAR\n");
                printf("(3)BOM\n");
                printf("(4)MUITO BOM\n");
                printf("(5)ÓTIMO\n");
                scanf ("%d",&q.alt);

                   if (q.alt==2){
                   q.nota=q.nota+40;
                   }

                   if (q.alt==3){
                   q.nota=q.nota+60;
                   }

                   if (q.alt==4){
                   q.nota=q.nota+80;
                   }
                   if (q.alt==5){
                   q.nota=q.nota+100;
                   }
                system("cls");
                //printf ("%d",nota);

                printf ("Educação do Vendedor\n");
                printf("(1)RUIM\n");
                printf("(2)REGULAR\n");
                printf("(3)BOM\n");
                printf("(4)MUITO BOM\n");
                printf("(5)ÓTIMO\n");
                scanf ("%d",&q.alt);

                if (q.alt==2){
                   q.nota=q.nota+40;
                   }

                   if (q.alt==3){
                   q.nota=q.nota+60;
                   }

                   if (q.alt==4){
                   q.nota=q.nota+80;
                   }
                   if (q.alt==5){
                   q.nota=q.nota+100;
                   }
                system("cls");

                printf ("Clareza das informações prestadas\n");
                printf("(1)RUIM\n");
                printf("(2)REGULAR\n");
                printf("(3)BOM\n");
                printf("(4)MUITO BOM\n");
                printf("(5)ÓTIMO\n");
                scanf ("%d",&q.alt);

                if (q.alt==2){
                   q.nota=q.nota+40;
                   }

                   if (q.alt==3){
                   q.nota=q.nota+60;
                   }

                   if (q.alt==4){
                   q.nota=q.nota+80;
                   }
                   if (q.alt==5){
                   q.nota=q.nota+100;
                   }
                system("cls");

                printf ("Instruções claras e corretas sobre a entrega\n");
                printf("(1)RUIM\n");
                printf("(2)REGULAR\n");
                printf("(3)BOM\n");
                printf("(4)MUITO BOM\n");
                printf("(5)ÓTIMO\n");
                scanf ("%d",&q.alt);

                if (q.alt==2){
                   q.nota=q.nota+40;
                   }

                   if (q.alt==3){
                   q.nota=q.nota+60;
                   }

                   if (q.alt==4){
                   q.nota=q.nota+80;
                   }
                   if (q.alt==5){
                   q.nota=q.nota+100;
                   }

                system("cls");
                printf ("Instruções claras e corretas sobre a montagem \n");
                printf("(1)RUIM\n");
                printf("(2)REGULAR\n");
                printf("(3)BOM\n");
                printf("(4)MUITO BOM\n");
                printf("(5)ÓTIMO\n");
                scanf ("%d",&q.alt);

                if (q.alt==2){
                   q.nota=q.nota+40;
                   }

                   if (q.alt==3){
                   q.nota=q.nota+60;
                   }

                   if (q.alt==4){
                   q.nota=q.nota+80;
                   }
                   if (q.alt==5){
                   q.nota=q.nota+100;
                   }
                system("cls");
                printf ("Atendimentos do entregador \n");
                printf("(1)RUIM\n");
                printf("(2)REGULAR\n");
                printf("(3)BOM\n");
                printf("(4)MUITO BOM\n");
                printf("(5)ÓTIMO\n");
                scanf ("%d",&q.alt);

                if (q.alt==2){
                   q.nota=q.nota+40;
                   }

                   if (q.alt==3){
                   q.nota=q.nota+60;
                   }

                   if (q.alt==4){
                   q.nota=q.nota+80;
                   }
                   if (q.alt==5){
                   q.nota=q.nota+100;
                   }
                system("cls");
                printf ("Conformidade do entregador\n");
                printf("(1)RUIM\n");
                printf("(2)REGULAR\n");
                printf("(3)BOM\n");
                printf("(4)MUITO BOM\n");
                printf("(5)ÓTIMO\n");
                scanf ("%d",&q.alt);

                if (q.alt==2){
                   q.nota=q.nota+40;
                   }

                   if (q.alt==3){
                   q.nota=q.nota+60;
                   }

                   if (q.alt==4){
                   q.nota=q.nota+80;
                   }
                   if (q.alt==5){
                   q.nota=q.nota+100;
                   }

                system("cls");

                FILE *arq;
                arq = fopen("pesquisa.txt","a");

                if (q.nota<=280){
                    printf ("Cliente totalmente insatisfeito com a empresa \n", q.nota);
                    fprintf(arq, "Clientes totalmente insatisfeitos com a empresa\n", q.nota);
                   }

                   else if(q.nota>280&&q.nota<=420){
                        printf ("Cliente satisfeito com a empresa\n", q.nota);
                        fprintf(arq, "Clientes satisfeitos com a empresa\n", q.nota);
                   }


                   else if (q.nota>420){
                       printf ("Cliente extremamente satisfeito\n", q.nota);
                       fprintf(arq,"Clientes extremamente satisfeitos\n", q.nota);
                   }
                fclose(arq);
            }
            else if(q.op1==2){
                exit(0);
            }
        }



    void leitura(){

    char *result;

    FILE *arq;
    arq = fopen("pesquisa.txt","r");

    while((fgets(result, sizeof(result), arq))!=NULL){
        printf("%s\n", result);
    }

    fclose(arq);
         }
//return 0;}
//}
//}
