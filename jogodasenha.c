#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    int senha_secreta = 6969;
    int palpite;
    int tentativas = 0;
    int max_tentativas = 3;
    
    while(1){
         printf("Digite uma senha de 4 Digitos\n ");
         scanf("%d" , &palpite);
         tentativas++;
         
         if (palpite == senha_secreta) {
             printf("\n Acertou a Senha \n");
             break;
         } else {
         
             int restantes = max_tentativas - tentativas;
             
             if (restantes > 0) {
                 printf("\nVocê tem %d tentativas Restantes\n", restantes);
             } else {    
                 printf("\n [ERRO] Senha Incorreta por %d vezes, Sistema Bloqueado", max_tentativas);
                 return 0;
             }
           
           }  
       } 
       
       printf("\nEstá Logando...\n");
       sleep(1);
       
       printf("\nEntrando no Sistema...\n");
       sleep(1);
       
       printf("\nEntrou com Sucesso\n");
       return 0;
       }
       
       
          
             
         
    