/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>  //inclusao da math para usar a funcao pow

float calculaIMC(float peso,float altura){  //funcao p/ calculo do IMC

    float imc, alturaconv;
    alturaconv = altura / 100.0;   //converte altura de cm p/ metros
    imc = peso / pow(2,alturaconv);
    
    return imc;
}


int main() {
    
 //declaracao de variaveis
 int numAlunos, contador = 0;
 float peso, altura;
 
 printf("Por favor, insira a quantidade de alunos na turma:");
 scanf("%d",&numAlunos);
 
 //laco de repeticao para englobar todos os alunos
 for(contador = 0; contador < numAlunos; contador++){
 
 printf("Insira a massa do aluno, em quilogramas:");
 scanf("%f",&peso);
 printf("Insira a altura, em centímetros, do aluno:");
 scanf("%f",&altura);
 
 //chama a funcao p/ calcular o IMC
 calculaIMC(peso,altura);
 
 //imprime resultado
 if(calculaIMC(peso,altura) >= 25){
     printf("Aluno acima do peso\n");
 }

 else {
     printf("Aluno com peso OK\n");
 }
 }
 
    return 0;
}