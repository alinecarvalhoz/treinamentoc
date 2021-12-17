/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void contaCaminhao(){
    
//declaracao de variaveis
int eixo, numCaminhao,quantDois=0, quantTres=0, quantQuatro=0;

while(eixo!=-1){
    
    //le a quantidade de eixos do caminhao
    printf("Insira quantos eixos o caminhão possuia ou -1 para parar a contagem:\n");
    scanf("%d",&eixo);
    
    
    //conta a quantidade de caminhoes de cada tipo de eixo
    if(eixo == 2){
        quantDois++;
    }
    else if(eixo == 3){
        quantTres++;
    }
    else if(eixo>=4){
        quantQuatro++;
    }
}

//imprime o resultado
printf("2 eixos: %d\n3 eixos: %d\n4+ eixos: %d",quantDois,quantTres,quantQuatro);
}
int main() {

//chama a funcao reponsável por ler e contar os eixos e os caminhoes
contaCaminhao();
    return 0;
}