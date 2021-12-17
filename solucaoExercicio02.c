/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void calculaPedidoMinimo(float largura, float comprimento, float altura){
    //declaracao de variaveis
    float perimetro;
    
    
    perimetro = (largura + comprimento)*2;
    
    //faz as verificacoes e imprime o resultado do pedido minimo
    if(perimetro<140 && altura<=25){
        printf("Caixas %.1fcm x %.1fcm x %.1fcm: minimo de 400 unidades.", largura, comprimento, altura);
    }
     else if(perimetro<140 && altura<=100){
        printf("Caixas %.1fcm x %.1fcm x %.1fcm: minimo de 200 unidades.", largura, comprimento, altura);
    }
    
    else {
        printf("Caixas %.1fcm x %.1fcm x %.1fcm: minimo de 100 unidades.", largura, comprimento, altura);
    }
}

int main() {
    
  //declaracao de variaveis
  float largura, comprimento, altura;
  
  //leitura de variaveis
  printf("Insira a largura da caixa, em centímetros:\n");
  scanf("%f",&largura);
  printf("Insira o comprimento da caixa, em centímetros:\n");
  scanf("%f",&comprimento);
  printf("Insira a altura da caixa, em centímetros:\n");
  scanf("%f",&altura);
  
  //chama funcao para calcular o pedido minimo e imprimir o resultado
  calculaPedidoMinimo(largura,comprimento,altura);
    
    return 0;
}
