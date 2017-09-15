/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: User
 *
 * Created on 12 de Setembro de 2017, 11:15
 */

#include <stdio.h>

int main() {
    printf("\n*********************************\n");
    printf("*\tBem-vindo ao jogo\t*\n");
    printf("*********************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
        
    while(1) {
        printf("\nTentativa %d \n", tentativas);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);    

        if(chute < 0){
            printf("Você não pode chutar números negativos.\n");
            continue;        
        } 
        
        int acertou = (chute == numerosecreto);        
        int maior = (chute > numerosecreto);
        
        if(acertou) {            
            break; 
        } else if (maior) {                        
            printf("Seu chute foi maior que o número secreto.\n");
            tentativas++;
        } else {
            printf("Seu chute foi menor que o número secreto.\n");
            tentativas++;
        }   
    }

    printf("Parabéns, você acertou com %d tentativas.\n", tentativas);
    
}

